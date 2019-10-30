
// Copyrigh (c) 2019 
// Author: Víctor García Cortés

#include <SFML/Window.hpp>

int main()
{
	sf::Window window(sf::VideoMode(800, 600), "SFLM Test");

	bool exit = false;
	
	while (!exit)
	{

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{
					window.close();
					exit = true;
				}
			}
		}

		window.display();
		return 0;


	return 0;
}