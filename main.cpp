#include <iostream>
#include <iomanip>
#include "employee.h"
#include "saleman.h"
#include "manager.h"
#include "technician.h"
#include "salemanager.h"

using namespace std;

int main()
{
		Manager m1(1000,"hyz",1001);
		Technician t1(1000,5,"helios",1002);
		Salemanager sm1(0.05,10000,5000,"he",1003);
		Saleman s1(0.04,5000,"hzy",1004);
		Employee *emp[4]={&m1,&t1,&sm1,&s1};
		for(int i=0;i<4;i++)
		{
				emp[i]->pay();
				emp[i]->show();
		}
		return 0;
}
