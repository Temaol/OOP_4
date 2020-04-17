#include <iostream>
#include <algorithm>
#include "WalkingTout.h"

#define MAXN 3

using namespace std;

int main()
{
	string excname, guidname;
	int d, m, y, time, cost, guidpayment = 0;
	WalkingTout tour[MAXN];
	for (int i = 0; i < MAXN; i++)
	{
		cout << "Tour name:";
		cin >> excname;
		tour[i].setExcursionName(excname);
		cout << "Date(dd.mm.yyyy): ";
		scanf_s("%d.%d.%d", &d, &m, &y);
		tour[i].setDate(d, m, y);
		cout << "Time: ";
		cin >> time;
		tour[i].setTime(time);
		cout << "Cost: ";
		cin >> cost;
		tour[i].setCost(cost);
		cout << "Guid Name: ";
		cin >> guidname;
		tour[i].setGuidName(guidname);
		cout << "Guid payment in %: ";
		cin >> guidpayment;
		tour[i].setGuidPayment(guidpayment);
	}
	for (int i = 0; i < MAXN; i++)
	{
		for (int j = 0; j < MAXN - i; j++) 
		{
			if (tour[j].getCost()*tour[j].getGuidPayment()/100 > tour[j+1].getCost() * tour[j+1].getGuidPayment() / 100)
			{
				swap(tour[j], tour[j + 1]);
			}
		}
	}
	for (int i = 0; i < MAXN; i++)
	{
		cout << tour[i] << endl
			<< tour[i].getGuidName() << " has "
			<< tour[i].getCost() * tour[i].getGuidPayment() / 100 << "$\n";
	}
}
