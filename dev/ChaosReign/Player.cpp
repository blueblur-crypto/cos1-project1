#include "Player.h"
#include <iostream>

Player::Player()
{
    name = "Wanderer";
    health = 100;
    attackPower = 10;

    inventory.push_back("Iron Sword");
    inventory.push_back("Health Potion");
}

void Player::DisplayStatus()
{
    std::cout << "\n--- Character Status ---\n";
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Attack Power: " << attackPower << std::endl;
}

void Player::TakeDamage(int damage)
{
    health = health - damage;

    if (health < 0)
    {
        health = 0;
    }
}

int Player::GetHealth()
{
    return health;
}

int Player::GetAttackPower()
{
    return attackPower;
}

void Player::DisplayInventory()
{
    std::cout << "\n--- Inventory ---\n";

    if (inventory.empty())
    {
        std::cout << "Your inventory is empty.\n";
    }
    else
    {
        for (int i = 0; i < inventory.size(); i++)
        {
            std::cout << i + 1 << ". "
                << inventory[i] << std::endl;
        }
    }
}

void Player::AddItem(std::string item)
{
    inventory.push_back(item);
}