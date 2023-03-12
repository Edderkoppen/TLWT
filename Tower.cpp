#include "Tower.hpp"

Tower::Tower(float x, float y, float width, float height, const sf::Color &color)
{
    /* creation du constructeur */
    rectangle.setPosition(x,y);
    rectangle.setSize(sf::Vector2f(width,height));
    rectangle.setFillColor(color);
}
void Tower::draw(sf::RenderWindow &window)
{
    /* dessine une tour */
    window.draw(rectangle);

}
