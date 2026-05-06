#include <iostream>
using namespace std;

class Locker{
	public:
		Locker()
		{
			cout << "Locker allocated to coustomer." << endl;
		}
		~Locker()
		{
			cout << "Locker returned to coustomer." << endl;
		}
};
int main()
{
	cout << "Stack object created" << endl;
	{
	    Locker lock;
    }
    cout << "Block ended. Destructor automatically called." << endl;
	
	cout << "\nHeap object created using new(keyword)." << endl;
	Locker *L1= new Locker;
	delete L1;
	cout << "Heap object is destroyed using delete(keyword)." << endl;
	
	return 0;
}
