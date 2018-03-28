#include "technician.h"

Technician::Technician(float rate,int hours,const string &name,int id)
{
		hourlyRate=rate;
		workHour=hours;
		this->name=name;
		number=id;
		employeeMax++;
}

void Technician::pay()
{
	money=hourlyRate*workHour;	
}

void Technician::show()
{
		cout << title << name << setw(10) << number << setw(10) << money << endl;
}

