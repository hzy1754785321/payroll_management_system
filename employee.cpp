#include "employee.h"

Employee::Employee()
{
		name="";
		number=0;
		money=0.0;
}

int Employee::employeeMax=1000;

Employee::~Employee()
{
  cout << "bye!" << endl;
}




