#include "Practice.h"

int main()
{
	Player Bob = Player(100, 1000, true);
	Bob.ScoreUp(10);
}





Player::Player(int H, int S, bool P)
{
	Health = H;
	Score = S;
	Playing = P
}

void Player::ScoreUp(int amount)
{
	Score += amount;
}

