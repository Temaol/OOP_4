#pragma once
#include "Excursion.h"

class WalkingTout : public Excursion
{
private:
	string guidName;
	int guidPayment;
public:
	WalkingTout();
	WalkingTout(string excName, int d, int m, int y, int time, int cost, string guidname, int pay);

	string getGuidName();
	int getGuidPayment();

	void setGuidName(string name);
	void setGuidPayment(int n);

	~WalkingTout();
};

