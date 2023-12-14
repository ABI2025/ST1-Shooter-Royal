#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Shooter-Royal");    // Fenster wurde erstellt

    // Textur des Spielers
    sf::Texture Player;
    Player.loadFromFile("Texturen/Player.png");       
    sf::Sprite player(Player);              

    player.setPosition(920.f, 480.f);
   
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
            player.move(-0.1, 0);     
        }

        // Steuerung Rechts
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            player.move(0.1, 0);      
        }

        // Steuerung Hoch
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            player.move(0, -0.1);     
        }

        // Steuerung Runter
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            player.move(0, 0.1);      
        }

        window.clear(sf::Color(50, 205, 50));       // Hintergrundfarbe
        window.draw(player);
        window.display();
    }
    
    return 0;
}