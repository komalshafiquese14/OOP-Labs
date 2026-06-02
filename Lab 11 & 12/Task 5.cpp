#include <iostream>
#include <string>
using namespace std;
//Abstrat class
class HospitalStaff{
	protected:
		string staff_name;
	public:
		HospitalStaff(string name)
		{
			staff_name = name;
		}
		
		virtual void perform_duty() = 0;       //pure virtual function
		
};
//derived class 1
class Doctor: public HospitalStaff{
	public:
		Doctor(string name) : HospitalStaff(name) {}
		
		void perform_duty() override            // override virtual function
		{
			cout << staff_name << " is diagnosing patients." << endl;
		}
};
//derived class 2
class Nurse: public HospitalStaff {
	public:
		Nurse(string name) : HospitalStaff(name) {}
		
		void perform_duty() override          // override virtual function
		{
			cout << staff_name << " is assisting patients." << endl;
		}
};
//derived class 3
class Receptionist: public HospitalStaff{
	public:
		Receptionist(string name) : HospitalStaff(name) {}
		
		void perform_duty() override            // override virtual function
		{
			cout << staff_name << " is managing appointments." << endl;
		}
};

int main()
{
	Doctor d("Dr.Ali");
	Nurse n("Nurse Sara");
	Receptionist r("Ahmed");
	
	d.perform_duty();
	n.perform_duty();
	r.perform_duty();
	
	return 0;
}
