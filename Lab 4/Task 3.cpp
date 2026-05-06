#include <iostream>
using namespace std;
class Rectangle{
	private:
		float length;
		float width;
	public:
		Rectangle()                     //default constructor
		{
			length = 1.0;
			width = 1.0;
		}
		Rectangle(float L, float W)      //parameterized constructor
		{
			length = L;
			width = W;
		}
		Rectangle(float S)              //single-parameter constructor
		{
			length = S;
			width = S;
		}
		
		float area(){                    //method to calculate area
		    return length*width; 
		}
		
		void display(){              //to display area and dimensions
			cout << "\nLength = " << length << endl;
			cout << "Width = " << width << endl;
			cout << "Area = " << area() << endl;
		}
};

int main()
{
	Rectangle R1;
	R1.area();
	R1.display();
	
	Rectangle R2(7.5,5.5);
	R2.area();
	R2.display();
	
	Rectangle R3(4.4);
	R3.area();
	R3.display();
	
	return 0;
}
