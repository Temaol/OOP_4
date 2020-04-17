#include "WalkingTout.h"

WalkingTout::WalkingTout()
{
	guidName = "";
	guidPayment = 0;
}

WalkingTout::WalkingTout(string excName, int d, int m, int y, int time, int cost, string guidname, int pay) : Excursion(excName,d,m,y,time,cost)
{
	guidName = guidname;
	guidPayment = pay;
}

string WalkingTout::getGuidName()
{
	return guidName;
}

int WalkingTout::getGuidPayment()
{
	return guidPayment;
}

void WalkingTout::setGuidName(string name)
{
	guidName = name;
}

void WalkingTout::setGuidPayment(int n)
{
	if (guidPayment > 100)
	{
		throw ("Guid payment is too big");
	}
	guidPayment = n;
}

WalkingTout::~WalkingTout()
{
}
