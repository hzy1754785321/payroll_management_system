#ifndef __SALEMANAGER_H__
#define __SALEMANAGER_H__

#include <iostream>
#include <iomanip>
#include "employee.h"
#include "manager.h"
#include "saleman.h"
#include "technician.h"

using namespace std;

class Salemanager:public Manager,public Saleman
{
		public:
				Salemanager(float rate,float total,float mp,const string &name,int id);
				void pay();
				void show();
};



#endif
