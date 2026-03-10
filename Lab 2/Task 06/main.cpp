#include <iostream>
#include <string>
#include "Student.h"
#include "Rectangle.h"
#include "Voter.h"
#include "Temperature.h"
#include "Calculator.h"

using namespace std;
int main()
{
	//student object
    Student S1;
	S1.getData();
	S1.displayData();
	//rectangle object
	Rectangle R1;
	R1.setDimension();
	R1.area();
	R1.perimeter();
	//voter object
	Voter V1;
    cout << "\nEnter voter name: " << endl;
    cin >> V1.name;
    cout << "Enter voter age: " << endl;
    cin >> V1.age;
    if (V1.isEligible()==1)
   {
 	   cout << V1.name << " is eligible for vote." << endl;
    }
	 else {
	   cout << V1.name << " is not eligible for vote." << endl;
	}
	//temperature object
	Temperature T1;
	cout << "\nEnter temperature in celsius: " << endl;
	cin >> T1.celsius;
	T1.convertTemperature();
	//Calculator object
		Calculator Num;
	cout << "\nEnter two numbers: " << endl;
	cin >> Num.num1 >> Num.num2;
	char choice;
	cout << "Choose an operator:"
	    << "\n+ for addiotion."
	    << "\n- for subtraction."
	    << "\n* for multiplication."
	    << "\n/ for division." << endl;
	cin >> choice;
	switch (choice)
	{
		case '+': Num.add(); break;
		case '-': Num.subtract(); break;
		case '*': Num.muliply(); break;
		case '/': Num.divide(); break;
		default:
			cout << "Invalid choice!" << endl;
	}
	return (0);

}
