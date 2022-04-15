#include <iostream>
#include <fstream>
#include <string>
#include "Head.h"
#include "Init.h"
#include "InputContainer.h"
#include "outputContainer.h"
#include "delete.h"
#include "sort.h"
#include "ignoreOutput.h"
using namespace std;

int main(int argNum, char* argStr[])
{



	/*if (argNum != 3)

	/*
	if (argNum != 3)

	
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
	InitList(list);
	input( inputFile, list);
	
	outputFile << "Filled container\n";
	output(outputFile, list);
	outputFile << "\n";
	outputFile << "Ignore bird\n";
	output(outputFile, list, container::type::BIRD);
	outputFile << "\n";
	outputFile << "Ignore fish\n";
	output(outputFile, list, container::type::FISH);
	outputFile << "\n";
	outputFile << "Ignore animal\n";
	output(outputFile, list, container::type::ANIMAL);
	outputFile << "\n";
	outputFile << "Sorted container\n";
	 sort(list);
	output(outputFile, list);
	outputFile << "\n";
	

	outputFile << "Empty conteiner\n";
	deleteContainer(list);
	output(outputFile, list);
}