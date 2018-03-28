#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#define title "name		number		money\n"

#include <iostream>

using namespace std;

class Employee
{
		protected:
				string name;
				int number;
				float money;
				static int employeeMax;
		public:
				Employee();
				~Employee();
				virtual void pay()=0;
				virtual void show()=0;
};




#endif
