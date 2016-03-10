#include<iostream>
#include "Dice.h"
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	Dice Mydice;   //Dice with empty properties
	int x = 1;
	int rollNo;		//Variable to store number of rolls the user requires

	int z[10] = { 5, 2, 11, 92, 71, 28, 111, 22, 43, 22 };	//Array to test function of type float

	cout << "Enter number of rolls: " << endl;
	cin >> rollNo;
	cout << endl;

	for (; x <= rollNo; x++)
	{
		Mydice.Roll();					//Roll dice
		Mydice.Average();				//Update Average number Rolled
		Mydice.print();		//Print dice properties after each consec
		cout << endl;
	}



	cout << endl;
	cout << "Average is " << Average(10, z) << endl;


	system("Pause");
	return 0;
}