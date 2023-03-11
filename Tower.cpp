#include "Tower.hpp"

Tower::Tower(float x ,float y)
{
    // constructeur
    posX = x;
    posY = y;
    level = 0;
    range = 100;
    fireRate = 0.5;
    timer = 0;

    // gestion de l'image

    if(!texture.loadFromFile("/Users/bilelmajdoub/Documents/ProjetFinalTowerDefense/tower.png"));
    {
        EXIT_FAILURE;
    }
    sprite.setTexture(texture);
    sprite.setPosition(posX,posY);

}

void Tower::upgrade()
{
    // augmente le niveau de la tour et met a jour ses proprietes

    level+=1;
    range+=100;
    fireRate+=0.2;
}

void Tower::draw(sf::RenderWindow &window)
{
    // desine la tour sur la fentre du jeu

    sprite.setPosition(posX,posY);
    window.draw(sprite);
}

