#include <iostream>
#include <string>
using namespace std;

class BankAccount{
	private:
		string account_holder;
		double balance;
		static int total_accounts;          //static variable
	public:
		BankAccount(string n, double b)
		{
			account_holder = n;
			balance = b;
			total_accounts++;
		}
		
		void display()
		{
			cout << "Account holder name: " << account_holder << "\t Balance: Rs" << balance << endl;
		}
		static void show_total_accounts()
		{
			cout << "\nTotal bank accounts created: " << total_accounts << endl; // static function
		}
};

int BankAccount::total_accounts = 0;

int main()
{
	BankAccount BA1("Ali",3000);
	BankAccount BA2("Umar",5000);
	BankAccount BA3("Sara",8000);
	
	cout << "Account details" << endl;
	BA1.display();
	BA2.display();
	BA3.display();
	
	BankAccount::show_total_accounts();
	return 0;
}
