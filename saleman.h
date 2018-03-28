#ifndef   __SALEMAN_H__
#define   __SALEMAN_H__

#include <iostream>
#include <iomanip>
#include "employee.h"

using namespace std;

class Saleman:virtual public Employee
{
		protected:
				float commRate;
				float saleNumber;
		public:
				Saleman(float rate,float number,const string &name,int id);
				void pay();
				void show();
};



#endif
