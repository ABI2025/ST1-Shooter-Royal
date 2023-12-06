#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Shooter-Royal");    // Fenster wurde erstellt

    sf::CircleShape player(25.f);   // Spieler wird erzeugt
    player.setPosition(920.f, 480.f);   // Position in der Mitte
    player.setFillColor(sf::Color(255, 211, 155)); // Farbe 

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            player.move(-1.f, 0.f);     // Steuerung Links
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            player.move(1.f, 0.f);      // Steuerung Rechts
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            player.move(0.f, -1.f);     // Steuerung Hoch
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            player.move(0.f, 1.f);      // Steuerung Runter
        }

        window.clear();
        window.draw(player);
        window.display();
    }
    
    return 0;
}