#ifndef __TECHNICIAN_H__
#define __TECHNICIAN_H__

#include <iostream>
#include <iomanip>
#include "employee.h"

class Technician:public Employee
{
		private:
				float hourlyRate;
				int workHour;
		public:
				Technician(float rate,int hours,const string &name,int id);
				void pay();
				void show();
};




#endif
