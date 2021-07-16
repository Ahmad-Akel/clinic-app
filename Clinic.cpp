#include "Clinic.h"
#include <iostream>
using namespace std;

Clinic::Clinic() {

}

bool Clinic::registerPatient(string name)
{
	Patient* pa = new Patient(name, patientsList.size() + 1);
	return	patientsList.insert(pa);
}
bool Clinic::registerAppoinmtent(Appointment* appointment, int paId)
{
	appointment->setId(appointmentsList.size() + 1);
	appointment->setPaId(paId);
	return appointmentsList.insert(appointment);
}
Colecao<Appointment*>  Clinic::showAppointmentHistory(int id)
{
	Colecao <Appointment*> appHistory;
	for (Appointment* app : appointmentsList)
	{
		//app->getId();
		if (app->getPaId() == id)
		{
			appHistory.insert(app);
		}
	}
	return appHistory;
}
float Clinic::totalBilled(int paId)
{
	//get appointments 
	for (Appointment* app : appointmentsList)
	{
		if (app->getId() == paId)
		{
			return app->getTotalExamsCost();
		}

	}
	// print total;
}
bool Clinic::addExamAppointment(int appId, Exam* exam)
{
	//add exam to appointment
	for (Appointment* app : appointmentsList)
	{
		if (app->getId() == appId)
		{
			app->addExam(exam);
			return true;
		}

	}
	return false;

}
bool Clinic::existAppointment(int appId) {
	return false;
}
Colecao<Patient*>  Clinic::GetPatientsList()
{
	return patientsList;
}
