//Online shopping system
#include <iostream>
#include <string>

using namespace std;
class Product {
	protected:
		string name;
		int price;
	public:
		Product (string n, int p) //base class constructor
		{
			name=n;
			price=p;
			cout << "Name: " << name << endl;
			cout << "Price: $" << price << endl;
		}
};

class Electronics : public Product {
	private:
		int warranty_years;
	public:
		Electronics (string n, int p, int w) : Product (n , p) //derived class constructor
		{
			warranty_years=w;
			cout << "Warranty years: " << warranty_years << endl;
		}
};

int main ()
{
	//electronics object
	Electronics item("Laptop" , 200 , 2);
	return 0;
}
