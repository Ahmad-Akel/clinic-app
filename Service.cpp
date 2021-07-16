#include "Service.h"
#include <iostream>
using namespace std;

Service::Service(int id, float cost, string date) {
	this->id = id;
	this->cost = cost;
	this->date = date;

}

int Service::getId()
{
	return id;
}

float Service::getCost()
{
	return cost;
}

string Service::getDate()
{
	return date;
}
