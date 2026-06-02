#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream fout("notes.txt");
    fout << "File opened." << endl;
    fout << "First file handling program." << endl;
    fout << "Cpp code." << endl;
    fout.close();
    
    ifstream fin("notes.txt");
    string line;
    while (getline(fin, line))
    {
    	cout << line << endl;
	}
	fin.close();
	
	fstream file("notes.txt",ios::app);
	file << "Maryam Jamil , Roll No: 2025-SE-06" << endl;
	file.close();
}
