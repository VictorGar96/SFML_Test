
// Copyrigh (c) 2019 
// Author: Víctor García Cortés

#include <SFML/Window.hpp>

int main()
{
	sf::Window window(sf::VideoMode(800, 600), "SFLM Test");

	bool exit = false;
	
	while (!exit)
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
		// ACTUALIZAR EL ESTADO DEL JUEGO

		// ...

		// RENDERIZAR EL FOTOGRAMA RESULTANTE

		window.display();
		
	}
	return 0;
}