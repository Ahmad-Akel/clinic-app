#pragma once
#include <iostream>
using namespace std;
class Patient
{
private:
	string name;
	int id = 0;
public:
	Patient(string name, int id);
	string getName();
	int getId();
};
