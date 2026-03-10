#ifndef CALCULATOR_H
#define CALCULATOR_H
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
#endif
