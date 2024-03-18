#include <SFML/Graphics.hpp>
#include <iostream>

#include "Generators/GalaxyMap.hpp"
#include "Graphs/AstralBody/Galaxy.hpp"
#include "Utils/Coordinate.hpp"

GalaxyMap initUniverse() {
  GalaxyMap galaxyMap;

  Coordinate positionTest = Coordinate(1, 2);
  Galaxy* galaxyTest = new Galaxy("Andromeda", positionTest, 4);
  galaxyMap.addBody(*galaxyTest);
  Coordinate positionTest1 = Coordinate(3+50, 7+50);
  Galaxy* galaxyTest1 = new Galaxy("Patata", positionTest1, 4);
  galaxyMap.addBody(*galaxyTest1);

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
  sf::RenderWindow window(sf::VideoMode(600, 400), "SpaceFortress");
  GalaxyMap galaxyMap = initUniverse();

  renderWindow(window, galaxyMap);

  return 0;
}