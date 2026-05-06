#include <iostream>
#include <string>
using namespace std;
class Person {
	private:
		string name;
		int age;
	public:
		void setPerson()
		{
		    cout << "Enter name : " << endl;
            cin >> name;
	        cout << "Enter age : " << endl;
	        cin >> age;
    	}
		void display_person_info()
		{
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
		}
};
class Student : public Person {
	private:
	    string student_id;
	public: 
	    void setStudent()
	    {
	    
	    	cout << "Enter student id : " << endl;
	    	cin >> student_id;
		}
		void display_student_info()
	    {
	    	cout << "Student ID : " << student_id << endl;
		}
};


int main () {
	//student object
	Student S1; 
	
	cout << "Setting student details" << endl;
	S1.setPerson();                                //from person
	S1.setStudent();                               //from student
	
	cout << "\n===Student Info===" << endl;
	S1.display_person_info();                      //from person
	S1.display_student_info();                     //rom student
	
	return (0);
}

