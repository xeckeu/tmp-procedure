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
		return 1;

	}
	ifstream inputFile(argStr[1]);
	ofstream outputFile(argStr[2]);*/

	ifstream inputFile("input.txt");
	ofstream outputFile("output.txt");
	
	
	Head* list=new Head;
	Init(list);
	input( inputFile, list);
	
	outputFile << "Filled container\n";
	output(outputFile, list);
	outputFile << "Empty conteiner\n";
	deleteContainer(list);
	output(outputFile, list);
}