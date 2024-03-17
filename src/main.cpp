#include <SFML/Graphics.hpp>
#include <iostream>

#include "Generators/GalaxyMap.hpp"
#include "Graphs/AstralBody/Galaxy.hpp"
#include "Utils/Coordinate.hpp"

GalaxyMap initUniverse() {
  GalaxyMap galaxyMap;

  Coordinate positionTest = Coordinate(1 * 100, 2 * 100);
  Galaxy galaxyTest = Galaxy("Andromeda", positionTest, 4);
  Coordinate positionTestChild = Coordinate(9 * 100, 4 * 100);
  Galaxy galaxyTestChild = Galaxy("Milky Way", positionTestChild, 45);
  galaxyTest.addChild(&galaxyTestChild);

  galaxyMap.addBody(galaxyTest);
  galaxyMap.addBody(galaxyTestChild);

  galaxyMap.printMap();
  galaxyTest.printChildren();
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
  sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
  GalaxyMap galaxyMap = initUniverse();

  window.setTitle("SpaceFortress");
  renderWindow(window, galaxyMap);

  return 0;
}