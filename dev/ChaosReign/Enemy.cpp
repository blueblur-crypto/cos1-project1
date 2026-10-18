#include "Enemy.h"
#include <iostream>

Enemy::Enemy(std::string enemyName, int enemyHealth, int enemyAttackPower)
{
    name = enemyName;
    health = enemyHealth;
    attackPower = enemyAttackPower;
}

void Enemy::DisplayStatus()
{
    std::cout << "\nEnemy: " << name << "\n";
    std::cout << "Health: " << health << "\n";
    std::cout << "Attack Power: " << attackPower << "\n";
}

void Enemy::TakeDamage(int damage)
{
    health = health - damage;

    if (health < 0)
    {
        health = 0;
    }
}

int Enemy::GetHealth()
{
    return health;
}

int Enemy::GetAttackPower()
{
    return attackPower;
}