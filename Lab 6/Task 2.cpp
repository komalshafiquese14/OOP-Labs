//Ride booking system
#include <iostream>
#include <string>

using namespace std;
class Vehicle {
	public:
		Vehicle(string vehicle_type)
		{
			cout << "Vehicle constructor called." << endl;
		}
};
class Car : public Vehicle {
	public:
		Car(string vehicle_type , string brand) : Vehicle (vehicle_type)
		{
			cout << "Car constructor called." << endl;
		}
};
class Electric_car : public Car {
	public:
		Electric_car(string vehicle_type , string brand , string model) : Car(vehicle_type , brand)
		{
			cout << "Electric Car constructor called." << endl;
		}
};

int main()
{
	//eleectric class object
	Electric_car EC("Electric Vehicle" , "Tesla" , "Model S");
	
	return 0;
}
