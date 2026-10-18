#pragma once
#include <string>

class Enemy
{
private:
    std::string name;
    int health;
    int attackPower;

public:
    Enemy(std::string enemyName, int enemyHealth, int enemyAttackPower);

    void DisplayStatus();
    void TakeDamage(int damage);

    int GetHealth();
    int GetAttackPower();
};