#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Shooter-Royal");
    sf::CircleShape player(25.f);
    player.setPosition(920.f, 500.f);
    player.setFillColor(sf::Color::Green);

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
            player.move(-1.f, 0.f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            player.move(1.f, 0.f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            player.move(0.f, -1.f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            player.move(0.f, 1.f);
        }

        window.clear();
        window.draw(player);
        window.display();
    }
    
    return 0;
}