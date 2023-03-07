#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800,600),"Tower Defense");

    int map[120][120] = {{0,1,1},{1,1,1},{0,0,1}};

    sf::RectangleShape rectangle(sf::Vector2f(120,120));
    rectangle.setFillColor(sf::Color(102,51,51));

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();

        for(int i=0;i<120;i++)
        {
            for(int j=0;j<120;j++)
            {
                rectangle.setPosition(i,j);
                window.draw(rectangle);
            }
        }
        window.display();
    }
   return 0;
}
