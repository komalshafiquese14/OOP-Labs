//File handling system
#include <iostream>
#include <string>

using namespace std;
class File {
	public:
		File()
		{
			cout << "File (from base class) is opened." << endl;
		}
		~File()
		{
			cout << "File (from base class) is closed." << endl;
		}
};
class Text_file : public File {
	public:
		Text_file()
		{
			cout << "Text file (from derived class) is opened." << endl;
		}
		~Text_file()
		{
			cout << "Text file (from derived class)  is closed." << endl;
		}
};


int main()
{
	//textfile object 
	Text_file TF;
	return 0;
}
