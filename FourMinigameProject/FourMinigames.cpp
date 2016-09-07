#include <iostream>
struct Player
{
	bool win;
	int score;
	int rock;
	int paper;
	int scissors;
};

struct Opponent
{
	bool win;
	int score;
	int rock;
	int paper;
	int scissors;
};

struct Rounds
{
	int roundCounter;
};

struct ChangingOfChoice
{
	int mindswapa;
	int mindswapb;
};

int RoundAdvance(Rounds &r)
{
	r.roundCounter = +1;
	return 1;
}

int NextMove(ChangingOfChoice &cotc, Opponent &o)
{
	cotc.mindswapa = o.rock;
	cotc.mindswapb = cotc.mindswapa;
	o.rock = o.paper;
	o.paper = o.scissors;
	o.scissors = cotc.mindswapb;
	return 1;
}

int Scores(Player &p, Opponent &o)
{
	if (p.win)
	{
		p.score += 1;
	}
	if (o.win)
	{
		o.score += 1;
	}
	return 1;
}

//Fix This!
int RPSChoice(Player &p)
{
	char input = '0';
}


//Stuff here is unchanged for the most part make adjustments to match struct and outside intergers
int main()
{
	char input = '0';
	std::cout << "Welcome to the Rock, Paper, Scissors Minigame! Here are the rules." << std::endl;
	std::cout << "You'll be facing an opponent who will choose Rock, Paper, or Scissors." << std::endl;
	std::cout << "You have to choose the same three choices to try and beat your opponent!" << std::endl;
	std::cout << "Best of 3 rounds.  If you and your opponent tie the round resets." << std::endl;
	system("pause");
	system("cls");
	std::cout << "Please choose Rock (r), Paper (p), or Scissors (s)... " << std::endl;
	std::cin >> input;

	


	system("pause");
	return 0;
}