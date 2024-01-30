#include <SFML/Graphics.hpp>
#include "Menue.h"

Menue::Menue()
{

}

Menue::~Menue()
{

}

void Menue::startMenue(sf::RenderWindow* window)
{
	window->clear(sf::Color(0,0,0));
	sf::RectangleShape rshape1(sf::Vector2f(250, 100));
	rshape1.setFillColor(sf::Color(139, 0, 0));
	rshape1.setPosition(sf::Vector2f(window->getPosition().x / 2, window->getPosition().y / 2));
	/*system("pause");*/
}

void Menue::einstellungen()
{

}

void Menue::spielStart()
{

}

void Menue::spielEnde(sf::RenderWindow* window)
{
	window->close();
}
