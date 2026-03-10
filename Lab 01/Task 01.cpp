#include <iostream>
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
	Student s1;
	s1.firstName= "Komal";
	s1.lastName= "Shafique";
	s1.rollNumber= 14;
	s1.marks= 80.5;
	
	s1.displayStudentInfo();
	return(0);
	
}
    
