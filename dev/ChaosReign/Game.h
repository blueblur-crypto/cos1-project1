#pragma once
#include "Player.h"
#include "Enemy.h"

class Game
{
private:
    Player player;

  

public:
    void Start();
	void DisplayMenu();
	void Explore();
	void Combat(Enemy& enemy);
    
};