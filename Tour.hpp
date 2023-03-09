
#ifndef HELLOSFML_TOUR_HPP
#define HELLOSFML_TOUR_HPP
#include <iostream>
#include <SFML/Graphics.hpp>
class Tour
{
private :
    int  numero;
    int level;
    std::string couleur;
    sf::Texture m_texture;
    sf::Sprite m_sprite;
public:
    Tour(int numero,int level,std::string couleur);
    Tour(sf::Vector2f position);
    void draw(sf::RenderWindow& window);

};
#endif //HELLOSFML_TOUR_HPP
