#include "Exam.h"
#include "Service.h"
#include <iostream>
using namespace std;

Exam::Exam(int id, float cost, string typology, string date) :Service(id, cost, date) {
	this->typology = typology;
}
string Exam::getTypology() { return typology; }
