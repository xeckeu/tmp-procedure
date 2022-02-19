#include <iostream>
#include <fstream>
#include <string>
#include "Head.h"
#include "Init.h"
#include "InputContainer.h"
#include "outputContainer.h"
#include "delete.h"
using namespace std;

int main(int argNum, char* argStr[])
{

	
	/*if (argNum != 3)
	{
		cout << "Incorrect command line\nWaited command input_file output_file\n";
		return 0;

	}
	ifstream inputFile(argStr[1]);
	ofstream outputFile(argStr[2]);*/
	std::string in;
	std::string out;
	getline(cin, in);
	getline(cin, out);
	in += '\0';
	out += '\0';
	ifstream inputFile;
	inputFile.open("C:\\\\input.txt\0", ios::in);
	ofstream outputFile;
	outputFile.open(out);
	
	
	Head* list=new Head;
	Init(list);
	input( inputFile, list);
	
	outputFile << "Filled container\n";
	output(outputFile, list);
	outputFile << "Empty conteiner\n";
	deleteContainer(list);
	output(outputFile, list);
}