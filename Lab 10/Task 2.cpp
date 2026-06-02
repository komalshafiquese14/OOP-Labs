#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream file("notes.txt");
	string line;
	int count_line = 0;
	while (getline (file , line))
	{
		cout << line << endl;
		count_line++;
	}
	cout << "\nTotal number of lines in file notes.txt are: " << count_line << endl;
    file.close();
}
