//
// Created by Mathieu on 3/6/2023.
//

#include "Main.h"

#include <iostream>
#include <SFML/Graphics.hpp>
#include <windows.h>

int main() {

    int width = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);
    std::cout << width << " " << height << std::endl;

    sf::RenderWindow window(sf::VideoMode(width,height), "First Window!");

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(sf::Color::Red);
        window.display();
    }
    std::cout << "Hello, 2PROJ!" << std::endl;
    return 0;
}