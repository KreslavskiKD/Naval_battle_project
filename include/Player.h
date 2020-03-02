#pragma once
#include <string>
#include "Board.h"

class Player {
public:
	Player();
	~Player() = default;
	void increase_score(int d);
	void get_shot();//������ �����
	void set_name(std::string);
	Board get_board();
private:
	Board board;
	int score;
	int combo;//�� �������, ���� ��� �� �����������
	std::string name;
};