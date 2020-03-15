#ifndef CONTROLLER_H
#define CONTROLLER_H

#include"Player.h"
#include <vector>

class Controller{

public:
	Controller();
	void game();
	void action_game_cycle();//�������� increase_score(�����-�� �������)
	void setup_player();

private:
	Interface interface;
	std::vector<Player> players;
	std::vector<Player> winners;
	int current_player;

};

#endif