#include <iostream>
#include <string>
using namespace std;
struct Student
{
	string firstName;
	string lastName;
	int rollNumber;
	float marks;
	
	
	void displayStudentInfo()
	{
		cout<<"Full Name:"<<firstName<<" "<<lastName<<endl;
		cout<<" Marks:"<<marks<<endl;
   }
};
 
 int main()
 {
 	Student *s1=new Student();
 	cout<< "Enter FirstName: ";
 	cin>>s1->firstName;
 	cout<<"Enter LastName: ";
 	cin>>s1->lastName;
 	cout<<"Enter RollNumber: ";
 	cin>>s1->rollNumber;
 	cout<<"Enter Marks: ";
 	cin>>s1->marks;
 	
 	s1->displayStudentInfo();
 	
 	delete s1;
 	return(0);
 }
