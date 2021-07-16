#include "Patient.h"
#include <iostream>
using namespace std;

Patient::Patient(string name, int id)
{
	this->name = name;
	this->id += id;
}
string Patient::getName()
{
	return name;
}
int Patient::getId()
{
	return id;
}
