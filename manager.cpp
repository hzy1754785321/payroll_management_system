#include "manager.h"

Manager::Manager(float m,const string &name,int id)
{
		monthlyPay=m;
		this->name=name;
		number=id;
		employeeMax++;
}

void Manager::pay()
{
		money=monthlyPay;
}

void Manager::show()
{
		cout << title << name << setw(10) << number << setw(10) << money << endl;
}
