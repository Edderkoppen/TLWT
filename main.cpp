#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800,600),"Terrain Tower Defense"); // on ouvre une aplication graphique de type RenderWindow de pixel
    // 800 * 600 avec un titre Terrain Tower Defense

    /* Creation des carres sur le terrain
     * grace aux fonctions primitives de SFML
     *
     */
    sf::RectangleShape grass(sf::Vector2f(100,100));
    /* on le remplit de couleur */
    grass.setFillColor(sf::Color::Blue);

    // Declaration du second rectangle

    sf::RectangleShape dirt(sf::Vector2f(100,100));
    /* remplissage des couleurs */
    dirt.setFillColor(sf::Color::Red);

    // declaration du troisieme rectangle

    sf::RectangleShape w(sf::Vector2f(100,100));
    /* remplisage du composant */
    w.setFillColor(sf::Color::Cyan);

    // on laisse l'interface graphique ouverte

    // on va implementer egalement des evenement ; ie, clics de souris pour fermer l'interface

    while(window.isOpen()) {
        sf::Event event; // on declare une instance d'evenement
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) // dans le cas ou l'evenement est une fenetre fermée ; on ferme la fentre par un clic de souris
            {
                window.close();
            }
        }

        /* on implemente les rectangles sur le terrain
         *
         */
        for(int i=0;i<800;i++) { // on parcourt le terrain
            w.setPosition(i,0); //on place la couleur le long de la carte
            window.draw(w); // puis on affiche
            

        }
        /* affichage du terrain */
       window.display();
    }
}

