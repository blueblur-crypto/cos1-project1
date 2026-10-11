#include "Game.h"
#include <iostream>
#include <limits>

void Game::DisplayMenu()
{
	std::cout << "\n==================\n";
	std::cout << "         Chaos Reign \n";
	std::cout << "\n==================\n";
	std::cout << "1. Character Creation\n";
	std::cout << "2. Load Game\n";
	std::cout << "3. Inventory\n";
	std::cout << "4. Missions \n";
	std::cout << "5. Exit Games\n";
	std::cout << " Enter your choice: ";
}

void Game::Start()
{
	int choice = 0;
	bool running = true;

	while(running)
	{
		DisplayMenu();

		if (!(std::cin >> choice))
		{
			std::cout << "Invalid input. Please enter a number between 1 and 5.\n";
			std::cin.clear(); // clear the error flag
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
			continue; // go back to the start of the loop
		}

		switch(choice)
		{
		case 1:
			// Handle character creation
			std::cout << "\n Character Creation?\n";
				std::cout << "1. Create a new character\n";
			break;
		case 2:
			// Handle Load Game
			std::cout << "\n Load Game?\n";
				std::cout << "You load your saved game.\n";
			break;
		case 3:
			// Handle inventory
			std::cout << "\n Inventory?\n";
				std::cout << "Your Inventory is currently empty.\n";
			break;
		case 4:
			// Handle missions
			std::cout << "\n Missions\n";
			std::cout << "No missions available.\n";
			break;
		case 5:
			std::cout << "Thank you for playing Chaos Reign!\n";
			running = false;
			break;


       default:
	       std::cout << "Invalid choice. Select 1 through 5.\n";
	       break;

        }
    } 
}