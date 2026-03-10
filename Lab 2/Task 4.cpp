#include <iostream>
using namespace std;
class Temperature {
	public:
		float celsius;
		void convertTemperature()
		{
			float fahrenheit = celsius*(9/5)+32;
			cout << "Temperature in fahrenheit is " << fahrenheit << endl;
		}
};
int main()
{
	Temperature T1;
	cout << "Enter temperature in celsius: " << endl;
	cin >> T1.celsius;
	T1.convertTemperature();
	return (0);
}
