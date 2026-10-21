#pragma once
#include <string>
#include <vector>

class Player
{
private:
    std::string name;
    int health;
    int attackPower;
    std::vector<std::string> inventory;

public:
    Player();

	void SetName(std::string playerName);
    void DisplayStatus();
    void TakeDamage(int damage);

    int GetHealth();
    int GetAttackPower();

    void DisplayInventory();
    void AddItem(std::string item);
};
