#include <iostream>
#include <string>

using namespace std;
class Employee{
	private:
		int id;
		string name;
		float salary;
	public:
		Employee()
		{
			id = 0;
			name = "Not assigned.";
			salary = 0.0;
		}
		void displayDetails()
		{
			cout << "Employee ID: " << id << endl;
			cout << "Employee name: " << name << endl;
			cout << "Employee salary: " << salary << endl;
		}
};

int main()
{
	Employee E1;
	E1.displayDetails();
	return 0;
}
