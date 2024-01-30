#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/Window/Mouse.hpp>
#include"Menue.h"

int main()
{
    Menue menue;
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Shooter-Royal");    // Fenster wurde erstellt

    window.setFramerateLimit(60);
    menue.startMenue(&window);
    // Textur des Spielers
    sf::Texture Player;
    Player.loadFromFile("Texturen/Player.png");       
    sf::Sprite player(Player);              

    player.setPosition(920.f, 480.f);

    //Positonierung der Maus
    sf::Mouse Maus;
    Maus.setPosition(sf::Vector2i(100, 200), window);
   
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Steuerung Links
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            player.move(-10, 0);     
        }

        // Steuerung Rechts
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            player.move(10, 0);      
        }

        // Steuerung Hoch
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            player.move(0, -10);     
        }

        // Steuerung Runter
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            player.move(0, 10);      
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
           menue.spielEnde(&window);
        }

        window.clear(sf::Color(50, 205, 50));       // Hintergrundfarbe
        window.draw(player);
        window.display();
    }
    
    return 0;
}