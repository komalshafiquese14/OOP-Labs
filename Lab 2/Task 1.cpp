#include <iostream>
#include <string>
using namespace std;
class Student {
	public:
	    string name;
	    int rollNumber;
	    float marks;
	    void getData()
	    {
	    	cout << "Enter name: " << endl;
	    	cin >> name;
	    	cout << "Enter roll number: " << endl;
	    	cin >> rollNumber;
	    	cout << "Enter marks: " << endl;
	    	cin >> marks;
		}
	    void displayData()
	    {
	    	cout << "Name of student is: " << name << endl;
	    	cout << "Roll number of student is: " << rollNumber << endl;
	    	cout << "Marks of student is: " << marks << endl;
		}
};
int main()
{
	Student S1;
	S1.getData();
	S1.displayData();
	return (0);
}
