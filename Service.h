#pragma once
#include <iostream>
using namespace std;
class Service
{
protected:
	int id;
	float cost;
	string date;

public:
	Service(int id, float cost, string date);
	int getId();
	float getCost();
	string getDate();
};
