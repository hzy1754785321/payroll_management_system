#include "salemanager.h"

Salemanager::Salemanager(float rate,float total,float mp,const string &name,int id)
{
		commRate=rate;
		saleNumber=total;
		monthlyPay=mp;
		this->name=name;
		number=id;
		employeeMax++;
}

void Salemanager::pay()
{
		money=monthlyPay+(commRate*saleNumber);
}

void Salemanager::show()
{
		cout << title << name << setw(10) << number << setw(10) << money << endl;
}

