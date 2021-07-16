#include "Appointment.h"
#include <iostream>
#include "Service.h"
#include<set>

using namespace std;

Appointment::Appointment(int id, string date, float cost, string diagnosis) :Service(id, cost, date) {
	this->diagnosis = diagnosis;
}
string Appointment::getDiagnosis()
{
	return diagnosis;
}
void Appointment::addExam(Exam* exam)
{

	this->examList.insert(exam);
}
float Appointment::getTotalExamsCost() {

	float total = 0;
	for (Exam* ex : examList)
	{
		total += ex->getCost();
	}
	return total;
}
Colecao<Exam*> Appointment::getExamsList()
{
	return this->examList;
}
void Appointment::setPaId(int id)
{
	this->paId = id;
}
void Appointment::setId(int id)
{
	this->id = id;
}

int Appointment::getPaId()
{
	return this->paId;
}
