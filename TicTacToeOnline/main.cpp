#include <iostream>
#include "Game.h"
#include "Board.h"
#include "Exception.h"

int main()
{
	try
	{
		Board::prepareBoard();
		Game m_game;
		m_game.run();
	}
	catch (Exception & e)
	{
		std::cout << "Error Ex: ";
		std::cout << e.what() << std::endl;
		std::system("PAUSE");
	}
	catch (std::exception & e)
	{
		std::cout << "Error std::ex: ";
		std::cout << e.what() << std::endl;
		std::system("PAUSE");
	}
    return EXIT_SUCCESS;
}
