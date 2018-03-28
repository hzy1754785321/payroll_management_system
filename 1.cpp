#include <iostream>

using namespace std;

class Person
{
		private:
				string name;
				string address;
		public:
				Person(string a,string b)
				{
						name=a;
						address=b;
				}
				~Person()
				{}

				void show()
				{
						cout << "name:" << name << "," << "address:" << address << endl;
				}
};

int main()
{
		Person p("hzy","anhui");
		p.show();
}

