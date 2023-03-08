#include <SFML/Graphics.hpp>
#include "map.hpp"
#define TAILLE 40
#define CASE 20


int main()
{


    sf::RenderWindow window(sf::VideoMode(800,600),"Tower Defense"); // on cree une interface graphique pour le dessin

    int map[20][20] = {{0,1,1},{1,1,1},{0,0,1},{1,1,1,1,0}}; // on cree un tableau de 20 cases

    sf::RectangleShape rectangle(sf::Vector2f(120,120)); // on cree une figure rectangle de dimension 120, 120 en longeur et hauteur
    rectangle.setFillColor(sf::Color(102,51,51)); // puis on le remplit en couleur
    rectangle.setOutlineThickness(3); // on decide de mettre une epaisseur au ligne
    rectangle.setOutlineColor(sf::Color::White); // les lignes seront de couleur blanches
    while(window.isOpen())
    {
        sf::Event event; // on cree un evenement
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)  // dans le cas ou l'evenement est de cliques sur la croix
                window.close(); // on ferme la fenetre graphique
        }
        window.clear();
        int val;
        std::cout<<"Veuiller saisir un nombre entre 1 et 3"<<std::endl;
        std::cin>>val;
        for(int i=0;i<TAILLE;i++)
        {
            for(int j=0;j<TAILLE;j++)
            {
                if (val==1)
                {

                        rectangle.setPosition(i*CASE,j*CASE);
                        window.draw(rectangle);

                }
                if (val == 2)
                {
                    rectangle.setPosition(i*CASE,j*CASE);
                    window.draw(rectangle);
                }
                if(val==3)
                {
                    rectangle.setPosition(i*CASE,j*CASE);
                    window.draw(rectangle);
                }

            }


        }






        window.display(); // on affiche la fentre graphique
    }
   return 0;
}
