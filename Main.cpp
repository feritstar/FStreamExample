#include "Main.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// ifstream:
	// ifstream is input file stream which allows you to read the contents of a file.

	// ofstream
	// ofstream is output file stream which allows you to write contents to a file.

	// fstream:
	// fstream allows both reading fromand writing to files by default.
	// however, you can have an fstream behave like an ifstream or ofstream
	// by passing in the ios::open_mode flag.

	fstream file;

	//file.open("D:\\c++\\examples\\FStreamExample\\input.txt", ios::out | ios::in);
	file.open("D:\\c++\\examples\\FStreamExample\\input.txt", ios::out | ios::binary | ios::app);

	if (!file.is_open())
	{
		cout << "File access is denied! Try again." << endl;
	}
	else
	{
		string str = "Ferit!!!";
		for (int i = 0; i < 100; i++)
		{
			file << i+1 << ", " << str << "\n";
		}
		file << "******************************************************************************\n";
		file.close();
	}


	cout << endl;
	return 0;
}