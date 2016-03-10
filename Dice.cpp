#include<iostream>
#include<stdio.h>
#include"Dice.h"
#include<stdlib.h>
#include<time.h>

using namespace std;

Dice::Dice()
{
	curr = 0;
	dumvar = 0;
	rolls = 0;
	Avg = 0;
}

void Dice::Setcount()
{
	dumvar = dumvar + 1;
}



int Dice::getcount()
{
	return dumvar;
}

void Dice::Setcurr(int x)
{
	curr = x;

}

int Dice::Roll()
{
	Setcurr(rand1());
	Setcount();
	setrolls(getcurr());
	return getcurr();
}

int Dice::rand1()

{
	return (1 + rand() % 5);								//

}

void Dice::print()
{
	cout << "Roll number " << getcurr() << endl;

	cout << "Number of counts :" << getcount() << endl;
	cout << "Average :" << getAverage() << endl;

}

int Random()
{
	srand(time(NULL));
	return (1 + rand() % 5);
}

int Dice::getcurr()
{
	return curr;
}

void Dice::setrolls(int x)
{
	rolls = x + rolls;
}

void Dice::Average()
{
	Avg = getrolls() / getcount();
}

float Dice::getrolls()
{
	return rolls;
}

float Dice::getAverage()
{
	return Avg;
}

float Average(int n, int s[])
{
	int x;
	float Total = 0;

	for (x = 0; x<n; x++)
	{
		Total = Total + s[x];
	}

	return (Total / n);
}