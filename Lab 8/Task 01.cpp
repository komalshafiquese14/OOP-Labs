#include<iostream>

using namespace std;
//polymorphism by using funcyion over loading and by using pointerto access thjat function

class Shape{
	public:
		virtual double area()
		{
			cout<<"Area of a shape: "<< endl;
			return 0;
			
		}

};

class Rectangle:public Shape{
	private:
		double length, width;
	public:
		Rectangle(double l, double w)
		{
			length = l;
			width = w;
	}
			double area() override
			{
				return length*width;
				
			 } 
	};
	
	class Circle:public Shape{
		private:
			double radius;
		public:
			Circle(double r)
			{
				radius = r;
			}
			double area() override
			{
				return 3.14*radius*radius;
			}
	};
	
	
	int main()
	{
		Shape*s1= new Rectangle(5.1,3.2 );
		Shape*s2= new Circle(4.0);
		
		cout<< " Area of Rectangle: " << s1->area() << endl;
		cout<< " Area of Circle: " << s2->area() << endl;
		
		delete s1;
		delete s2;
		
		return 0;
		
	}
	
