#include <iostream>
using namespace std;
class Box{
	private:
	    int length;
	public:
		Box(int l)
		{
			length = l;
		}
		
		//friend function
		friend void display_length(Box b);
};

void display_length(Box b)
{
	cout << "Length of box: " << b.length << endl;
}

int main()
{
	Box B1(25);
	//friennd function call
	display_length(B1);
	return 0;
}
