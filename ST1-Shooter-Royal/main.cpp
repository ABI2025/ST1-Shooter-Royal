#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/Window/Mouse.hpp>
#include"Menue.h"

using namespace std;
using namespace sf;

void menuescreen(RenderWindow &);

int main()
{
    RenderWindow window(VideoMode(1920,1080), "Shooter-Royal",Style::Fullscreen);    // Fenster wurde erstellt
    
    
    window.setFramerateLimit(60);

    // Textur des Spielers
    Texture Player;
    Player.loadFromFile("Texturen/Player.png");       
    Sprite player(Player);              

    player.setPosition(920.f, 480.f);

    
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        // Steuerung Links
        if (Keyboard::isKeyPressed(Keyboard::A))
        {
            player.move(-10, 0);     
        }

        // Steuerung Rechts
        if (Keyboard::isKeyPressed(Keyboard::D))
        {
            player.move(10, 0);      
        }

        // Steuerung Hoch
        if (Keyboard::isKeyPressed(Keyboard::W))
        {
            player.move(0, -10);     
        }

        // Steuerung Runter
        if (Keyboard::isKeyPressed(Keyboard::S))
        {
            player.move(0, 10);      
        }

        if (Keyboard::isKeyPressed(Keyboard::Tab))
        {
          menuescreen(window);
          
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Delete)) 
        {
            
            window.close();
        }

        window.clear(Color(50, 205, 50));       // Hintergrundfarbe
        window.draw(player);
        window.display();
    }

    return 0;
}


void menuescreen(RenderWindow& game) 
{

    RenderWindow menuewindow(VideoMode(1920, 1080), "Menue");
    Menue menu( 1920, 1080);

    for (; menuewindow.isOpen();)
    {

        Event menuescreen;


        while (menuewindow.pollEvent(menuescreen))
        {

            //Window Close

            if (Keyboard::isKeyPressed(Keyboard::Escape))  
            {
                menuewindow.close(); 
            }

            //Menue Navigation

            if (Keyboard::isKeyPressed(Keyboard::Up))
            {
                menu.moveUp();
            }

            if (Keyboard::isKeyPressed(Keyboard::Down))
            {
                menu.moveDown();
            }

            //Menue Selection

            if (Keyboard::isKeyPressed(Keyboard::Enter))
            {
                menu.menuSelection(menuewindow,game);
            }




            menuewindow.clear(Color::Black);        // Hintergrundfarbe
            menu.drawMenue(menuewindow); 
            menuewindow.display(); 
        }

    }
}