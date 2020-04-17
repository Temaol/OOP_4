#include "Excursion.h"

Excursion::Excursion()
{
	excursionName = "";
	day = month = 1;
	year = 2000;
	time = 0;
	cost = 0;
}

Excursion::Excursion(string nameExc, int d, int m, int y, int time, int cost)
{
	excursionName = nameExc;
	day = d;
	month = m;
	year = y;
	this->time = time;
	this->cost = cost;
}

string Excursion::getExcursionName()
{
	return excursionName;
}

string Excursion::getDate()
{
	return to_string(day) + "." + to_string(month) + "." + to_string(year);
}

int Excursion::getTime()
{
	return time;
}

int Excursion::getCost()
{
	return cost;
}

void Excursion::setExcursionName(string name)
{
	excursionName = name;
}

void Excursion::setDate(int d, int m, int y)
{
	if (d > 31)
	{
		throw "incorrect day";
	}
	day = d;
	if (m > 12)
	{
		throw("Incorrect month");
	}
	year = y;
}

void Excursion::setTime(int t)
{
	time = t;
}

void Excursion::setCost(int cost)
{
	this->cost = cost;
}

Excursion::~Excursion()
{
}

ostream& operator<<(ostream& out, Excursion& obj)
{
	out << "Excursion name: " << obj.excursionName << endl
		<< "Date: " << obj.getDate() << endl
		<< "Time: " << obj.time << endl
		<< "Cost: " << obj.cost;
	return out;
}
