#include <iostream>
#include <string>
using namespace std;

//Hierarchical inheritance
class Employee {
	private:
		string name;
		int salary;
	public:
		void set_employee()
		{
			cout << "Enter name :" << endl;
			cin >> name;
			cout << "Enter salary : " << endl;
			cin >> salary;
		}
		void display_employee ()
		{
			cout << "Name: " << name << endl;
			cout << "Salary: " << salary << endl;
		}
};

class Developer : public Employee {
	private:
		string programming_language;
	public:
		void set_developer()
		{
			cout << "Enter programming language : " << endl;
			cin >> programming_language;
		}
		void display_developer()
		{
			cout << "Programming language: " << programming_language << endl;
		}
};

class Designer :public Employee {
	private:
		string design_tool;
	public:
	    void set_designer()
		{
			cout << "Enter designer tool: " << endl;
			cin >> design_tool;
		}
		void display_designer()
		{
			cout << "Designer tool: " << design_tool << endl;
		} 
};


int main()
{
	Developer dev;
	Designer dis;
	
	//from developer object
	cout << "Enter developer details : " << endl;
	dev.set_employee();                           //from employee
	dev.set_developer();                          //from developer
	cout << "\n===DEVELOPER INFO===" << endl;
	dev.display_employee();                       //from employee
	dev.display_developer();                      //from developer
	
	//from designer object
	cout << "\nEnter designer details : " << endl;
	dis.set_employee();                         //from employee
	dis.set_designer();                        // from designer
	cout << "\n===DESIGNER INFO===" << endl;
	dis.display_employee();                     // from employee
	dis.display_designer();                     //from designer
	
	return 0;
}
