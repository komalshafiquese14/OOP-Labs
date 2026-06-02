#include <iostream>
using namespace std;

class Distance{
	private:
		int feet, inches;
	public:
		// constructor
		Distance(int f, int i)
		{
			feet = f;
			inches = i;
		}
		// friend function
		friend void add_distance(Distance d1, Distance d2);
};
void add_distance(Distance d1, Distance d2)
{
	int total_inches = d1.inches+d2.inches;
	int total_feet = d1.feet+d2.feet;
	
	int result_feet = total_feet+total_inches/12;
	int result_inches = total_inches%12;
	
	cout << "Sum of distances = " << result_feet << " feet " << result_inches << " inches." << endl;
}

int main()
{
	Distance D1(6, 5); // 6 feet , 5 inches
	Distance D2(7, 10); // 7 feet, 10 inches
	
	add_distance(D1, D2); //14 feet, 3 inches
	return 0;
}
