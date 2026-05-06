#include <iostream>
#include <string>
using namespace std;

//Multilevel inheritance
class Person {
	private:
		string name;
		int age;
	public:
		void set_Person()
		{
			cout << "Enter name : " << endl;
			cin >> name;
			cout << "enter age : " << endl;
			cin >> age;
		}
		void display_person()
		{
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
		}
};
class Employee : public Person {
	private:
		string employee_id;
	public:
		void set_Employee()
		{
			cout << "Enter employee ID : " << endl;
			cin >> employee_id;
		}
		void display_employee()
		{
			cout << "Employee ID : " << employee_id << endl;
		}
};
class Manager : public Employee {
	private:
		string department;
	public:
		void set_Manager()
		{
			cout << "Enter department : " << endl;
			cin.ignore();	
			getline (cin, department);
		}
		void display_manager()
		{
			cout << "Department : " << department << endl;
		}
};


int main()
{
	//Manager object
	Manager man;
	
	cout << "Set Manager details" << endl;
	man.set_Person();                                       //from person
	man.set_Employee();                                     //from employee
	man.set_Manager();                                      //from manager
	
	cout << "\n===Complete Info===" << endl;
	man.display_person();                                   //from person
	man.display_employee();                                 //from employee
	man.display_manager();                                  //from manager
	
	return 0;
}
