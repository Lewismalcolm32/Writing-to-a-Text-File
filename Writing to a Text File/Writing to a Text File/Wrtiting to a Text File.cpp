#include <fstream>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//I want to create a text file, and write ish to it

//This function will print a string however many times the user would like it to. 
void createTxtFilePlusWriteAlot()
{
	string someIsh;
	int someNum = 0;
	fstream newFile("myNewTxtFile.txt");
	if (!newFile) cerr << "AAAAAAAAAHHHHHHHH!!!!!!!";
	cout << "Say something:" << endl;
	getline(cin, someIsh);
	cout << "How many times you want me to say this shyt? (Give me a number, or I'll break.):" << endl;
	//cin >> someNum;
	//cout << someNum; //Debugging
	while (!(cin >> someNum))   //(!(someNum >= INT_MIN) || (someNum <= INT_MAX)) // ((isdigit(someNum))) // (someNum)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		//cerr << cin.good() << cin.eof() << cin.fail() << cin.bad() << " ";
		cerr << "You rude. I said a number. Gimme a number... or get out... a**hole.:" << endl;
		//cin >> someNum;
	}
	for (int i = someNum; i > 0; --i)
	{
		cout << someIsh;
		newFile << someIsh /*<< endl*/;
		/*--someNum;*/ //while(someNum)
	}
	cout << endl;
	newFile.close();

}

int main()
{
	createTxtFilePlusWriteAlot();
	return 0;
}