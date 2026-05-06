#include <iostream>
#include <string>
using namespace std;

//Multiple inheritance
class Printer {
	public:
		void print_document()
		{
			cout << "Document is printing..." << endl;
		}
}; 
class Scanner {
	public:
		void scan_document()
		{
			cout << "Document is scanning..." << endl;
		}
};
class Photocopier : public Printer , public Scanner {
	public:
		void photocopy()
		{
			cout << "Document is copying..." << endl;
		}
};

int main()
{
	//photocopier object
	Photocopier document; 
	          
	document.scan_document();           //from scanner
	document.print_document();          //from printer
	document.photocopy();               // from photocopier

    return 0;
}
