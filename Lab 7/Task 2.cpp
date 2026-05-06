#include <iostream>
using namespace std;
class Calculator {
	public:
		double addition(double num1,double num2)
		{
			return num1+num2;
		}
		double multiplication(double num1,double num2)
		{
			return num1*num2;
		}
};

class Student {
	private:
	    Calculator *cal;           //aggregation
	public:
		Student(Calculator *c)
		{
			cal = c;
		}
		void Solve_addition(double num1, double num2)
		{
			cout << "Addition result: " << cal->addition(num1,num2) << endl;
		}
		void Show_multiplication(double num1, double num2)
		{
			cout << "Multiplication red=sult: " << cal->multiplication(num1, num2) << endl;
		}
};

int main()
{
	Calculator mycalculator;
	
	Student S1(&mycalculator);
	Student S2(&mycalculator);
	
	cout << "== Student 1 ==" << endl;
	S1.Solve_addition(4,15);      //output 19
	S1.Show_multiplication(6,9);   //output 54
	
	cout << "\n== Student 2 ==" << endl;
	S2.Solve_addition(6,9);        //output 15
	S2.Show_multiplication(7,5);   //output 35 
	return 0;
	
}
