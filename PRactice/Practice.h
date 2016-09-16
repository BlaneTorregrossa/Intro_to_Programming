#ifndef _Practice_H_
#define _Practice_H_

class Player
{
public:
	Player(int H, int S, bool P);
	void ScoreUp(int amount);

private:
	int Health;
	int Score;
	bool Playing;
};

#endif