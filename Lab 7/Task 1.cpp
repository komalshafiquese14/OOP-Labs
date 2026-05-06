#include <iostream>

using namespace std;

class Display {
	private:
	    double last_result;
	public:
		Display()                      //display constructor
		{
			last_result = 0.0;
		}
		void show_result(double result)       //method to show result
		{
			last_result = result;
			cout << "Result : " << result << endl;
		}
		double getLast_result() const             //to show last result
		{
			return last_result;
		}
};


class Calculator {
	private:
		Display display;                    //composition
		double result;
	public:
		Calculator()                       //constructor
		{
			result = 0.0;
		}
		void addition(double num1 , double num2)      //add method
		{
			result = num1+num2;
		    display.show_result(result);
		}
		void multiplication(double num1 , double num2)       //multiply method
		{
			result = num1 * num2;
			display.show_result(result);
		}
		void Show_last_result() const                       //for last result
		{
			cout << "Last result : " << display.getLast_result() << endl;
		}
};

int main()
{
	Calculator cal;              
	cal.addition(10,45);           //output 55
	cal.multiplication(9,5);       //output 45
	cal.Show_last_result();        //output 45
	return 0;
}
