#include <iostream>

using namespace std;
class Calculator {
	public:
	float num1;
	float num2;
	void add()
	{
		cout << "Sum of " << num1 << " and "<< num2 <<" is:  " << num1+num2 << endl;
	}
	
	void subtract()
	{
		cout << " Difference of " << num1 << " and " << num2 << " is " << num1-num2 << endl;
	}
	
	void muliply()
	{
	cout << " Multiplication of " << num1 << " and " << num2 << " is " << num1*num2 << endl;
    }
    
    void divide()
    {
    	if(num2==0)
        {cout<< " Division by zero is invalid " << endl;}
        else
        {cout << " division of "	<< num1 << " and " << num2 << " is " << num1/num2 << endl;}
	}
};
int main()
{
	Calculator Num;
	cout << "Enter two numbers: " << endl;
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
	return 0;
}
