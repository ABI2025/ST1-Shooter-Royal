#include <SFML/Graphics.hpp>
#pragma once

#define MAX_NUMBER_OF_ITEMS 3

class Menue
{
public:
	
	Menue(int, int);
	~Menue();
	
	void moveUp();
	void moveDown();
	void menuSelection(sf::RenderWindow&,sf::RenderWindow&);
	void drawMenue(sf::RenderWindow&);

private:
	int selectedItem;
	sf::Font font;
	sf::Text menu[MAX_NUMBER_OF_ITEMS];
};

