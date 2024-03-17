#include <SFML/Graphics.hpp>
#include <iostream>

#include "Generators/GalaxyMap.hpp"
#include "Graphs/AstralBody/Galaxy.hpp"
#include "Utils/Coordinate.hpp"

GalaxyMap initUniverse() {
  GalaxyMap galaxyMap;

  Coordinate positionTest = Coordinate(1, 2);
  Galaxy galaxyTest = Galaxy("Andromeda", positionTest, 4);
  Coordinate positionTestChild = Coordinate(9, 4);
  Galaxy galaxyTestChild = Galaxy("Milky Way", positionTestChild, 45);
  galaxyTest.addChild(&galaxyTestChild);

  std::printf("Galaxy %s has Position X %d\n", galaxyTest.getName().c_str(),
              galaxyTest.getX());

  galaxyMap.addBody(galaxyTest);
  // galaxyMap.addBody(galaxyTestChild);

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
  sf::RenderWindow window(sf::VideoMode(400,360), "My window");
  GalaxyMap galaxyMap = initUniverse();

  window.setTitle("SpaceFortress");
  Coordinate positionTest = Coordinate(1, 2);
  Galaxy galaxyTest = Galaxy("Andromeda", positionTest, 4);
  std::printf("Galaxy Test position X %d\n", galaxyTest.getX());
  renderWindow(window, galaxyMap);

  return 0;
}