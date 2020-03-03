#ifndef CONTROLLER_H
#define CONTROLLER_H

#include"Player.h"
#include <vector>

class Controller{
public:
	Controller();
	void game();
	void action_game_cycle();//�������� increase_score(�����-�� �������)
	void setup_player();//�������� ������� std::string read_name(int) � Interface, ��������� void set_name(std::string) � get_board() � Player
private:
	Interface interface;
	std::vector<Player> players;
	std::vector<Player> winners;//������ � 2 ���� ��� players(������ ����� �������!!!)
	int current_player;
};

#endif