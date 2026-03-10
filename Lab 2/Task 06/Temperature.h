#ifndef TEMPERATURE_H
#define TEMPERATURE_H


class Temperature {
	public:
		float celsius;
		void convertTemperature()
		{
			float fahrenheit = celsius*(9/5)+32;
			cout << "Temperature in fahrenheit is " << fahrenheit << endl;
		}
};
#endif
