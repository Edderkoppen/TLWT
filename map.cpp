#include <SFML/Graphics.hpp>
#define CASE 20

int main()
{

    sf::RenderWindow window(sf::VideoMode(800,600),"Tower Defense"); 

    int map[20][20] = {{0,1,1},{1,1,1},{0,0,1},{1,1,1,1,0}};

    sf::RectangleShape rectangle(sf::Vector2f(120,120));
    rectangle.setFillColor(sf::Color(102,51,51));
    rectangle.setOutlineThickness(3);
    rectangle.setOutlineColor(sf::Color::White);
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();

        for(int i=0;i<20;i++)
        {
            for(int j=0;j<20;j++)
            {
                rectangle.setPosition(i*CASE,j*CASE);
                window.draw(rectangle);
            }
        }
        window.display();
    }
   return 0;
}

