#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	//copy content from one file to another file
	ifstream fin("notes.txt");                        //open in read mode
	if(!fin)
	{
		cout << "Error: notes.txt not fount." << endl;
		return 1;
	}
	
	ofstream fout("notes_copy.txt");                 //write mode and copy content
	if(!fout)
	{
		cout << "Error: cannot create notes_copy.txt." << endl;
		fin.close();
		return 1;
	}
	
	string line;
	int line_count;
	while(getline(fin , line))                     //copy content
	{
		fout << line << endl;
		line_count++;
	}
	
	fin.close();
	fout.close();
	
	cout << "Content copy to notes_copy.txt successfully." << endl;
	cout << "Total numbers of lines in notes.txt: " << line_count << endl;
	
	return 0;
}
