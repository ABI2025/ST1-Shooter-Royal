#include <SFML/Graphics.hpp>
#pragma once
class Menue
{
public:
	Menue();
	~Menue();
	void startMenue(sf::RenderWindow*);
	void einstellungen();
	void spielStart();
	void spielEnde(sf::RenderWindow*);
};

