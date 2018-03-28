#include "saleman.h"


Saleman::Saleman(float rate,float number,const string &name,int id)
{
		commRate=rate;
		saleNumber=number;
		this->name=name;
		number=id;
		employeeMax++;
}


void Saleman::pay()
{
		money=commRate*saleNumber;
}


void Saleman::show()
{
		cout << title << name << setw(10) << number << setw(10) << money << endl;
}

