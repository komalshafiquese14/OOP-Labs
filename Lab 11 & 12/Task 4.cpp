#include <iostream>
#include <string>

using namespace std;
class Employee {
	private:
		int Id;
		string name;
		static string company_name; //static  variable
	public:
		Employee(int i, string n)
		{Id = i;
		name = n;
		}
		
		void display()
		{
			cout << "ID: " << Id << "\t\tName: " << name << "\tCompany name: " << company_name << endl;
		}
		
		static void show_companyInfo()   // static function
		{
			cout << "Company Name: " << company_name << endl;
		}
};

string Employee::company_name = "ABC Tech";

int main()
{
	Employee E1(101, "Ali");
	Employee E2(102, "Umar");
	
	Employee::show_companyInfo();
	cout << "\nEmployee Details" << endl;
	E1.display();
	E2.display();
	
	return 0;
}
