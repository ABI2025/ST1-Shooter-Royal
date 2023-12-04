#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Shooter-Royal");
    sf::CircleShape shape(25.f);
    shape.setFillColor(sf::Color::Green);

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
            shape.move(-1.f, 0.f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            shape.move(1.f, 0.f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            shape.move(0.f, -1.f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            shape.move(0.f, 1.f);
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
    
    return 0;
}