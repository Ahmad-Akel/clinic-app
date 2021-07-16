#pragma once
#include "Service.h"
#include <iostream>
using namespace std;
class Exam :public Service
{
private:
	string typology = "None!";

public:
	Exam(int id, float cost, string typology, string date);
	//bool request(Appointment a);
	string getTypology();
};
