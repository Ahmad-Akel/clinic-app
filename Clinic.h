#pragma once
#include "Patient.h"
#include "Colecao.h"
#include "Exam.h"
#include "Appointment.h"
#include <iostream>
using namespace std;
class Clinic
{
private:
	int id = 0; // will be equal to patient Id  and passed  out to exams and appointments ;
	Colecao<Patient*> patientsList;
	Colecao<Appointment*> appointmentsList;
	bool existAppointment(int paId);
public:
	Clinic();
	bool registerPatient(string name);
	bool registerAppoinmtent(Appointment* appointment, int paId);
	Colecao<Appointment*> showAppointmentHistory(int paId);//as we are assuming that App ID is Equal To Pa ID;
	float totalBilled(int paId);
	bool addExamAppointment(int appID, Exam* exam);
	Colecao<Patient*> GetPatientsList();
};
