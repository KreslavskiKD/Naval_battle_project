#pragma once
#include"Player.h"

class Controller{
public:
	Controller();
	void game();
	void action_game_cycle();//�������� increase_score(�����-�� �������)
	void setup_player();//�������� ������� std::string read_name(int) � Interface, ��������� void set_name(std::string) � get_board() � Player
private:
	Interface interface;
	Player players[2];
	Player winners[1];//������ � 2 ���� ��� players(������ ����� �������!!!)
	int current_player;
};