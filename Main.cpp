//
// Created by Mathieu on 3/6/2023.
//

#include "Main.h"

#include <iostream>
#include <SFML/Graphics.hpp>


int main() {
    sf::RenderWindow window(sf::VideoMode(640,480), "First Window!");

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(sf::Color::Blue);
        window.display();
    }
    std::cout << "Hello, 2PROJ!" << std::endl;
    return 0;
}