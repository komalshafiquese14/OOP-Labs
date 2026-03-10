#include <iostream>
#include <string>
using namespace std;
class Voter {
	public:
		string name;
		int age;
		bool isEligible(); 
};
bool Voter::isEligible()
{
	if (age > 18)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}; 
 int main()
 {
 	Voter V1;
 	cout << "Enter voter name: " << endl;
 	cin >> V1.name;
 	cout << "Enter voter age: " << endl;
 	cin >> V1.age;
 	if (V1.isEligible()==1)
 	{
 		cout << V1.name << " is eligible for vote." << endl;
	 }
	 else {
	 	cout << V1.name << " is not eligible for vote." << endl;
	 }
	 return (0);
 }
