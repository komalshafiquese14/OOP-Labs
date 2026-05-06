#include <iostream>
#include <string>

using namespace std;
class Device{
	private:
	    string *device_name;
	    int *device_id;  //dinamically allocated data
	public:
		Device(string name, int id)
	    {
	    	device_name = new string(name);
	    	device_id = new int (id);
	    	cout << "Base class constructor." << endl;
	    	cout << "Device name: " << *device_name << endl;
	    	cout << "Device  ID: " << *device_id << endl;
		}
		~Device()
		{
			delete device_name;
			delete device_id;
			cout << "\nBase class destructor called.." << endl;
		}
};
class Sensor : public Device {
	private:
		string *sensor_type;
		int *sensor_value; //dinamically allocated data
	public:
		Sensor(string name, int id, string type, int value) : Device(name, id)
		{
			sensor_type = new string(type);
			sensor_value = new int(value);
			cout << "\nDerived class constructor." << endl;
			cout << "Sensor type: " << *sensor_type <<  endl;
			cout << "Sensor value: " << *sensor_value << endl;
		}
		~Sensor()
		{
			delete sensor_type;
			delete sensor_value;
			cout << "\nDerived class destructor called.." << endl;
		}
};

int main()
{
	Sensor *S1= new Sensor("Ammeter",1,"Current measuring",30);
	delete S1;
	return 0;
}
