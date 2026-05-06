#include <iostream>
#include <string>

using namespace std;
class BankAccount{
	private:
		string account_no;
		string account_holder;
		double balance;
	public:
		BankAccount(string no, string holder, double b)
		{
			account_no = no;
			account_holder = holder;
			balance = b;
		}
		void showAccountDetails()
		{
			cout << "Account number: " << account_no << endl;
			cout << "Account holder: " << account_holder << endl;
			cout << "Account balance: " << balance << endl;
		}
};
int main()
{
	BankAccount BA("PK0309800780100","Muhammad jawad",10000);
	BA.showAccountDetails();
	return 0;
}
