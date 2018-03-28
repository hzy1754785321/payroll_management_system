#ifndef __MANAGER_H__
#define __MANAGER_H__

#include <iostream>
#include <iomanip>
#include "employee.h"

using namespace std;

class Manager:virtual public Employee
{
		protected:
				float monthlyPay;
		public:
				Manager(float m,const string &name,int id)
;
				void pay();
				void show();
};

#endif
