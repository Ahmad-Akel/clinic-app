#pragma once
#include "Service.h"
#include "Exam.h"
#include "Colecao.h"
#include <iostream>
#include<set>

using namespace std;
class Appointment :public Service
{
private:
	string diagnosis;
	Colecao<Exam*> examList;
	int paId;
public:
	Appointment(int id, string date, float cost, string diagnosis);
	string getDiagnosis();
	float getTotalExamsCost();
	void addExam(Exam* exam);
	Colecao<Exam*>	getExamsList();
	void setPaId(int id);
	void setId(int id);
	int getPaId();
};
