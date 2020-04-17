#pragma once
#include <iostream>
#include <string>

using namespace std;

class Excursion
{
private:
	string excursionName;
	int day;
	int month;
	int year;
	int time;
	int cost;
public:
	Excursion();
	Excursion(string nameExc, int d, int m, int y, int time, int cost);

	string getExcursionName();
	string getDate();
	int getTime();
	int getCost();

	void setExcursionName(string name);
	void setDate(int d, int m, int y);
	void setTime(int t);
	void setCost(int cost);

	friend ostream& operator<<(ostream& out, Excursion& obj);

	~Excursion();
};

