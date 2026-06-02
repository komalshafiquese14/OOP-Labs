#include <iostream>
#include <string>
using namespace std;
//operator overloading
class Distance{
	private:
		int feet, inches;
	public:
		Distance(int f, int i)
		{
			feet = f;
			inches = i;
		}
		bool operator == (Distance d)
		{
			return (feet == d.feet && inches == d.inches);
		}
		void display()
		{
			cout << feet << " feet " << inches << " inches " << endl;
		}
};

int main()
{
	Distance d1(5, 8);
	Distance d2(5, 8);
	Distance d3(4, 8);
	
	cout << "Distance 1: "; d1.display(); 
	cout << "Distance 2: "; d2.display();
	cout << "Distance 3: "; d3.display(); cout << endl;
	
	if (d1==d2)
	{
		cout << "Distance 1 and Distance 2 are equal." << endl;
	}
	else 
	{
		cout << "Distance 1 and Distance 2 are not equal." << endl;
	}
	
	if (d1==d3)
	{
		cout << "Distance 1 and Distance 3 are equal." << endl;
	}
	else 
	{
		cout << "Distance 1 and Distance 3 are not equal." << endl;
	}
	
	return 0;
}
