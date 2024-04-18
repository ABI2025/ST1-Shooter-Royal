#include <SFML/Graphics.hpp>
#include "Menue.h"
#include <iostream>


Menue::Menue(int hoehe, int breite)
{

	if (!font.loadFromFile("Fonts/Roboto-Black.ttf")) {
		std::cout << "No File Founded !";
	}
	menu[0].setFont(font);
	menu[0].setFillColor(sf::Color::Blue);
	menu[0].setString("Play");
	menu[0].setPosition(breite / 2, hoehe / (MAX_NUMBER_OF_ITEMS + 1) * 0.5);
	menu[0].setCharacterSize(60);

	menu[1].setFont(font);
	menu[1].setFillColor(sf::Color::White);
	menu[1].setString("Options");
	menu[1].setPosition(breite / 2, hoehe / (MAX_NUMBER_OF_ITEMS + 1) * 1);
	menu[1].setCharacterSize(60);

	menu[2].setFont(font);
	menu[2].setFillColor(sf::Color::White);
	menu[2].setString("Exit");
	menu[2].setPosition(breite / 2, hoehe / (MAX_NUMBER_OF_ITEMS + 1) * 1.5);
	menu[2].setCharacterSize(60);

}

Menue::~Menue()
{

}

void Menue::moveUp()
{
	menu[selectedItem].setFillColor(sf::Color::White);
	selectedItem--;

	if (selectedItem < 0) {
		selectedItem = 2;
	}
	menu[selectedItem].setFillColor(sf::Color::Blue);

	
}

void Menue::moveDown()
{
	menu[selectedItem].setFillColor(sf::Color::White);
	selectedItem++;

	if (selectedItem > 2) {
		selectedItem = 0;
	}
	menu[selectedItem].setFillColor(sf::Color::Blue);


}

void Menue::menuSelection(sf::RenderWindow &window, sf::RenderWindow &game)
{
	int selectedItem = this->selectedItem;

	switch (selectedItem)
	{
	case 0: {
		window.close();
		break;
	}
	case 1: {
		window.close();
		sf::RenderWindow Settings(sf::VideoMode(1920, 1080), "Settings");
		break;
	}
	case 2: {
		window.close();
		game.close();
		break;
	}

	default:
		break;
	}
}

void Menue::drawMenue(sf::RenderWindow& menue)
{
	for (int i = 0; i < 3; i++) {
		menue.draw(menu[i]);
	}
}
