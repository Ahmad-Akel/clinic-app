#include <iostream>
#include "Service.h"
#include "Patient.h"
#include "Exam.h"
#include "Clinic.h"
#include "Appointment.h"
#include "Colecao.h"
using namespace std;

void PrintPatientsList(Clinic* clinic)
{
	for (Patient* pa : clinic->GetPatientsList())
	{
		cout << "ID :" << pa->getId() << " Name: " << pa->getName() << endl;
	}
}
void PrintAppointmetsHistory(int paId, Clinic* cl)
{
	Colecao<Appointment*> history = cl->showAppointmentHistory(paId);
	for (Appointment* app : history)
	{
		cout << "App_ID: " << app->getId() << " PA_ID: " << app->getPaId() << " Diagnost: " << app->getDiagnosis() << " Date: " << app->getDate() << " Cost: " << app->getCost() << endl;
	}
}

void PrintMenu()
{
	cout << "Welcome to Clinic Manager App\n";
	cout << "Please Select from List Below\n";
	cout << "1 - Add Pacient \n";
	cout << "2 - Add Appointments\n";
	cout << "3 - Add Exams To Appointmets\n";
	cout << "4 - Show Appointmets History\n";
	cout << "5 - Calculate Total Billed\n";
}

void PrintExams()
{

}
int main()
{
	Clinic* clinic = new Clinic();
	/*Patient* pat = new Patient("Mahmoud");
	Patient* pat2 = new Patient("ahmad");
	Patient* pat3 = new Patient("aeham");*/

	//int id = pat->getId();
	/*clinic->registerPatient("Mahmoud");
	clinic->registerPatient("Ahmad");
	clinic->registerPatient("Aeham");


	clinic->registerAppoinmtent(new Appointment(1, "date", 10, "he is Ok!"), 1);
	clinic->registerAppoinmtent(new Appointment(1, "date", 20, "he is Ok!"), 1);
	clinic->registerAppoinmtent(new Appointment(1, "date", 30, "he is Ok!"), 1);
	clinic->registerAppoinmtent(new Appointment(1, "date", 40, "he is Ok!"), 1);*/

	//Colecao<Appointment*> history = clinic->showAppointmentHistory(id);
	////Colecao<Exam*> ex;
	//for (Appointment* app : history)
	//{
	//	app->addExam(new Exam(id, 150, "Checkup", "12"));
	//	app->addExam(new Exam(id, 0, "Checkup", "12"));
	//	app->addExam(new Exam(id, 50, "Checkup", "12"));
	//	/*Colecao<Exam*> exams = app->getExamsList();
	//	for (Exam* ex : exams)
	//	{
	//		cout << "Ex ID" << " :" << ex->getId();
	//	}*/
	//}
	//cout << clinic->totalBilled(id);
	//Exam* extoinsert = new Exam(10, 100, "Test", "te");
	//bool res = ex.insert(extoinsert);
	//cout << res;
	PrintMenu();
	//PrintPatientsList(clinic);
	//PrintAppointmetsHistory(1, clinic);
	int selected = 0;
	while (selected == 0)
	{
		string name = "";
		int Pid = 0;
		string date = "";
		float cost = 0;
		string diagnost = "";
		cin >> selected;
		switch (selected)
		{

		case 1:
			// Add Patient
			cout << "Enter Pacient Name:";
			cin >> name;
			clinic->registerPatient(name);
			cout << "Pacient Added";
			selected = 0;
			system("CLS");
			PrintMenu();
			break;
		case 2:
			PrintPatientsList(clinic);
			cout << "\nPlease Select PID To Add Appointmets to Pacient \n";
			cin >> Pid;
			cout << "\nEnter Appointment Date:" << endl;
			cin >> date;
			cout << "\nEnter Appointment Cost:" << endl;
			cin >> cost;
			cout << "\nEnter Appointment Diagnost:" << endl;
			cin >> diagnost;
			clinic->registerAppoinmtent(new Appointment(0, date, cost, diagnost), Pid);
			cout << "\nAppointment  Added !";
			selected = 0;
			system("CLS");
			PrintMenu();
			break;
		case 3:
			PrintPatientsList(clinic);
			cout << "\nPlease Select PID to Show Appontments \n";
			cin >> Pid;
			PrintAppointmetsHistory(Pid, clinic);
			cout << "\nPlease Select ID to Add Exams \n";

			break;
		default:
			selected = 0;
			system("CLS");
			PrintMenu();

			break;
		}
	}
	return 0;
}
