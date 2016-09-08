#include <iostream>

class Student
{
private:

	char name = '0';
	int age = 19;
	int id = 553012;


public:

	char studentAName(char name);
	int studentAAge(int age);
	int studentAID(int id);

};

char Student::studentAName(char name)
{

	return 0;

}

int Student::studentAAge(int age)
{
	if (age == 19)
	{
		age = 23;
	}
	return 0;

}

int Student::studentAID(int id)
{

	return 0;
}






int main()
{
	
}