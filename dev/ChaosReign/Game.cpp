#include "Game.h"
#include <iostream>
#include <limits>
#include <string>


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

        std::string characterName = "";

		{
		
			// Handle character creation
			std::cout << "\n Character Creation?\n";
				std::cout << "1. Create a new character\n";
                std::cout << "Enter your character's name: ";

                std::cin >> characterName;

                std::cout << "\nWelcome, " << characterName << "!\n";

			break;
		
			// Handle Load Game
			std::cout << "\n Load Game?\n";
				std::cout << "You load your saved game.\n";
			break;
		
			// Handle inventory
			std::cout << "\n Inventory?\n";
				std::cout << "Your Inventory is currently empty.\n";
			break;
		
			// Handle missions
			std::cout << "\n Missions\n";
			std::cout << "No missions available.\n";
			break;
		
			std::cout << "Thank you for playing Chaos Reign!\n";
			running = false;
			break;


       
	       std::cout << "Invalid choice. Select 1 through 5.\n";
	       break;

        }
    } 
}

void Game::Explore()
{
    std::cout << "\nYou enter a dark forest...\n";
    std::cout << "A Fallen Knight appears!\n";

    Enemy enemy("Fallen Knight", 30, 6);
    Combat(enemy);

    if (enemy.GetHealth() <= 0)
    {
        std::cout << "You defeated the enemy!\n";
        player.AddItem("Ancient Coin");
    }
}

void Game::Combat(Enemy & enemy)
{
    int choice = 0;

    while (player.GetHealth() > 0 &&
        enemy.GetHealth() > 0)
    {
        player.DisplayStatus();
        enemy.DisplayStatus();

        std::cout << "\n1. Attack\n";
        std::cout << "2. Retreat\n";
        std::cout << "Choose: ";

        if (!(std::cin >> choice))
        {
            std::cout << "Enter 1 or 2.\n";
            std::cin.clear();
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (choice == 1)
        {
            enemy.TakeDamage(player.GetAttackPower());
            std::cout << "You attack the enemy!\n";

            if (enemy.GetHealth() > 0)
            {
                player.TakeDamage(enemy.GetAttackPower());
                std::cout << "The enemy attacks you!\n";
            }
        }
        else if (choice == 2)
        {
            std::cout << "You retreat!\n";
            break;
        }
        else
        {
            std::cout << "Invalid choice. Choose 1 or 2.\n";
        }
    }

    if (player.GetHealth() <= 0)
    {
        std::cout << "You have been defeated!\n";
    }
}