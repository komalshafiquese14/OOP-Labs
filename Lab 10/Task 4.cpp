#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream fout("student.txt");
	fout << "Maryam Jamil, Roll No: 2025-SE-06" << endl;
	fout << "Komal Shafiq, Roll No: 2025-SE-14" << endl;
	fout << "Mahnoor Parvaiz, Roll No: 2025-SE-16" << endl;
	fout.close();
	
	ifstream fin("student.txt");
	string line;
	while(getline(fin, line))
	{
		cout << line << endl;
	}
	
	fin.close();
	return 0; 
}
