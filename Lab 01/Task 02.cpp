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
	int n;
	cout<<"enter number of students:";
	cin>>n;
	
	Student students[n];
	for(int i=0;i<n;i++)
{
	cout<<"Enter detail for students: "<<i+1<<":"<<endl;
	cout<<" Enter FirstName: ";
	cin>>students[i].firstName;
	cout<<"Enter LastName: ";
	cin>>students[i].lastName;
	cout<<"Enter RollNumber: ";
	cin>>students[i].rollNumber;
	cout<<"Enter Marks: ";
	cin>>students[i].marks;
}
 for(int i=0;i<n;i++)
 {
 cout<<"Student"<<i+1<< "info:"<<endl;
 students[i].displayStudentInfo();
}
   return(0);
	
	
}

