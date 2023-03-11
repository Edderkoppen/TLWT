

#ifndef HELLOSFML_TOWER_HPP
#define HELLOSFML_TOWER_HPP
#include <iostream>
#include <SFML/Graphics.hpp>

// creation de la classe Tower

class Tower
{
private:
    sf::Texture texture;
    sf::Sprite sprite;
    float posX;
    float posY;
    int level;
    float range;
    float fireRate;
    float timer;
public:
    Tower(float x,float y);
    void upgrade(); // fonction de mise a jour
    void draw(sf::RenderWindow& window);

};
#endif //HELLOSFML_TOWER_HPP
