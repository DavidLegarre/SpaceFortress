#include <SFML/Graphics.hpp>
#include <iostream>

#include "Generators/GalaxyMap.hpp"
#include "Graphs/AstralBody/Galaxy.hpp"
#include "Utils/Coordinate.hpp"

GalaxyMap initUniverse() {
  GalaxyMap galaxyMap;

  size_t initialSize = galaxyMap.getBodies().size();

  Coordinate positionTest = Coordinate(1, 2);
  Galaxy galaxyTest = Galaxy("Andromeda", positionTest, 4);
  galaxyTest.printDetails();

  galaxyMap.addBody(galaxyTest);
  // Get the size of the Bodies vector after adding the object
  size_t finalSize = galaxyMap.getBodies().size();

  std::printf("Initsize: %ld, finalsize: %ld\n", initialSize, finalSize);

  return galaxyMap;
}

void renderWindow(sf::RenderWindow& window, GalaxyMap& galaxyMap) {
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) window.close();
    }

    window.clear(sf::Color::Black);

    galaxyMap.renderMap(window);

    window.display();
  }
}

int main() {
  sf::RenderWindow window(sf::VideoMode(400, 360), "SpaceFortress");
  GalaxyMap galaxyMap = initUniverse();

  renderWindow(window, galaxyMap);

  return 0;
}