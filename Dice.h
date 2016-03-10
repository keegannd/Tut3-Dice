#pragma once
#pragma once
#ifndef Dice_H
#define Dice_H

class Dice
{
private:

	int curr;
	int dumvar;
	float rolls;
	float Avg;

public:

	Dice();
	int getcurr();
	void Setcurr(int x);

	int getcount();
	void Setcount();

	int Roll();
	void setrolls(int x);
	float getrolls();
	int rand1();

	void Average();
	float getAverage();
	void print();
};

#endif

float Average(int x, int s[]);
int Random();