


#define HELLOSFML_TOWER_HPP
#include <iostream>
#include <SFML/Graphics.hpp>

// creation de la classe Tower

class Tower
{
private:
    sf::RectangleShape rectangle; //creation de la tour
public:
    // creation du constructeur
    Tower(float x,float y,float width, float height, const sf::Color& color);
    //creation de la methode draw pour dessiner a l'ecran
    void draw(sf::RenderWindow& window);
};
#endif //HELLOSFML_TOWER_HPP
