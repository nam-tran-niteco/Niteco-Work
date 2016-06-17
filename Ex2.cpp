#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

	cout << "-----------------Telephone Cost----------------- \n";

	int cost = 25000;

	int minutes_using = 0;

	cout << "Insert minutes using ( >= 0 ): "; cin >> minutes_using;

	cout << "Cost = " << "25000" << " + ";

	if(minutes_using <= 50){
		cost += 600 * minutes_using;
		cout << "600 * "<< minutes_using << "= " << cost;
	}

	else if (minutes_using >= 51 && minutes_using <= 200){
		minutes_using -= 50;
		cost += 600 * 50 + 400 * minutes_using;
		cout << "600 * 50 + 400 * "<< minutes_using << "= " << cost;
	}

	else if(minutes_using >= 201){
		minutes_using -= 200;
		cost += 600 * 50 + 400 * 150 + 200 * minutes_using;
		cout << "600 * 50 + 400 * 150 + 200 * " << minutes_using << " = " << cost;
	}
}

