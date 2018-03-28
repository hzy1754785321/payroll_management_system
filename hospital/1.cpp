#include <iostream>
#include <iomanip>

using namespace std;

class Doctor;

class Patient
{
	    private:
				string name;
				static int number;
				float bp;
				string answer;
		public:
				Patient(string name="",float bp=0,string answer="")
				{
						this->name=name;
						this->bp=bp;
						this->answer=answer;
						number++;
				}
						
				void show()
				{
						cout << name << "    "  << bp << setw(11) << answer << endl;
				}

				void setBp()
				{
						cout << "please input your name:" ;
						cin >> name;
						cout << "please input the blood pressure:" ;
						cin >> bp;
				}
				friend class Doctor;
};

int Patient::number=0;

class Doctor
{
		private:
				string name;
		public:
				Doctor(string name="Hanson")
				{
						this->name=name;
				}
				static void setAnswer(Patient *t)
					{
							if(t->bp>70&&t->bp<130)
									t->answer="normal";
							else if(t->bp>50&&t->bp<69||t->bp>131&&t->bp<150)
									t->answer="medicine";
							else
									t->answer="hospital";
					}
				
				void show()
				{
						cout << "Doctor:" << name << endl;
				}

};

int main()
{
		Patient p[3];
		Doctor s;
		for(int i=0;i<3;i++)
		{
				p[i].setBp();
				s.setAnswer(&p[i]);
		}
		s.show();
		for(int i=0;i<3;i++)
		{
				p[i].show();
		}
		return 0;
}


