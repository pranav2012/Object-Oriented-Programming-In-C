#include <iostream>
#include <string>

using namespace std;

class Employee
{
	string name;
	int id;
	public:
		void getdetails()
		{
            cout << "\nEnter name: ";
			cin >> name;
            cout << "Enter id: ";
            cin >> id;
		}
		void displayInfo()
		{
            cout << "\nid: " << id << " ";
			cout << "name: " << name<<"\n";
		}
};

const int no_of_employee = 5;

int main()
{
	Employee st[no_of_employee];
	for( int i=0; i < no_of_employee; i++ )
	{
		cout << "Employee " << i + 1;
		st[i].getdetails();
	}

	for( int i=0; i < no_of_employee; i++ )
	{
		cout << "\nEmployee " << i + 1;
		st[i].displayInfo();
	}
	return 0;
}
