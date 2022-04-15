#include "stdafx.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;


#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\delete.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\addElement.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\Init.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\equ.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\inputAnimal.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\inputBird.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\inputElement.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\inputFish.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\inputContainer.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\nameLenght.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\outputAnimal.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\outputFish.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\outputBird.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\outputElement.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\outputContainer.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\ignoreOutput.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\proga\������6\sort.cpp"

namespace progaUT
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodAddElement)
		{
			// TODO: ���������� ����� ��� ������ �����
			Element* newElement = new Element;
			Head* head = new Head;
			head=InitList(head);
			Assert::IsTrue(newElement==(addElement(head, newElement)),(const wchar_t*)"bad test");
		}

		TEST_METHOD(TestMethodDeleteContainer)
		{
			// TODO: ���������� ����� ��� ������ �����
			Element* newElement = new Element;
			Head* head = new Head;
			head = InitList(head);
			addElement(head, newElement);
			Assert::IsTrue(0 == deleteContainer(head), (const wchar_t*)"bad test");
		}

		TEST_METHOD(TestMethodEqu)
		{
			// TODO: ���������� ����� ��� ������ �����
			Element* f = new Element;
			f->nameLenght = 14;
			Element* s = new Element;
			s->nameLenght=15;
			Assert::IsTrue(equ(f,s)==-1, (const wchar_t*)"bad test");
		}

		TEST_METHOD(TestMethodInputAnimal)
		{
			// TODO: ���������� ����� ��� ������ �����
			animal a;

			std::ifstream inputFile;
				inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\inputAnimal.txt");
			if(inputFile.is_open())
			
				Assert::IsTrue(3==input(a,inputFile), (const wchar_t*)"bad test");
			else Assert::Fail();
		}

		TEST_METHOD(TestMethodInputFish)
		{
			// TODO: ���������� ����� ��� ������ �����
			fish a;

			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\inputFish.txt");
			if (inputFile.is_open())

				Assert::IsTrue(3 == input(a, inputFile), (const wchar_t*)"bad test");
			else Assert::Fail();
		}

		TEST_METHOD(TestMethodInputBird)
		{
			// TODO: ���������� ����� ��� ������ �����
			bird a;

			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\inputBird.txt");
			if (inputFile.is_open())

				Assert::IsTrue(3 == input(a, inputFile), (const wchar_t*)"bad test");
			else Assert::Fail();
		}

		TEST_METHOD(TestMethodInputElement)
		{
			// TODO: ���������� ����� ��� ������ �����
			container* e = new container;
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\input.txt");
			if (inputFile.is_open())

				Assert::IsTrue(false != input(inputFile), (const wchar_t*)"bad test");
			else Assert::Fail();
		}

		TEST_METHOD(TestMethodInputList)
		{
			// TODO: ���������� ����� ��� ������ �����
			Head* e = new Head;
			InitList(e);
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\input.txt");
			if (inputFile.is_open())

				Assert::IsTrue(3== input(inputFile,e), (const wchar_t*)"bad test");
			else Assert::Fail();
		}

		TEST_METHOD(TestMethodNameLenght)
		{
			// TODO: ���������� ����� ��� ������ �����
			Element* e = new Element;
			e->c = new container;
			e->c->key=e->c->ANIMAL;
				std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\inputAnimal.txt");
			input(e->c->a, inputFile);

				Assert::IsTrue(4==nameLenght(e), (const wchar_t*)"bad test");
		}
		TEST_METHOD(TestMethodOutputAnimal)
		{
			animal a;

			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\inputAnimal.txt");
			input(a, inputFile);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\output.txt");
			

			Assert::IsTrue(0 == output(a,outputFile), (const wchar_t*)"bad test");
		}
		TEST_METHOD(TestMethodOutputFish)
		{
			fish a;

			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\inputFish.txt");
			input(a, inputFile);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\output.txt");


			Assert::IsTrue(0 == output(a,outputFile), (const wchar_t*)"bad test");
		}
		TEST_METHOD(TestMethodOutputBird)
		{
			bird a;

			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\inputBird.txt");
			input(a, inputFile);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\output.txt");


			Assert::IsTrue(0 == output(a, outputFile), (const wchar_t*)"bad test");
		}
		TEST_METHOD(TestMethodOutputElement)
		{
			Element* e = new Element;
			e->c = new container;
			e->c->key = e->c->ANIMAL;
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\inputAnimal.txt");
			input(e->c->a, inputFile);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\output.txt");


			Assert::IsTrue(true == output(outputFile,e), (const wchar_t*)"bad test");
		}
		TEST_METHOD(TestMethodOutputList)
		{
			Head* e = new Head;
			InitList(e);
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\input.txt");
			input( inputFile,e);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\output.txt");


			Assert::IsTrue(3 == output(outputFile, e), (const wchar_t*)"bad test");
		}

		TEST_METHOD(TestMethodIgnoreOutput)
		{
			Head* e = new Head;
			InitList(e);
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\input.txt");
			input(inputFile, e);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\output.txt");


			Assert::IsTrue(2 == output(outputFile, e, container::type::ANIMAL), (const wchar_t*)"bad test");
		}
		TEST_METHOD(TestMethodSort)
		{
			Head* e = new Head;
			InitList(e);
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\input.txt");
			input(inputFile, e);
			inputFile.close();
			auto actual = sort(e);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\proga\\progaUT\\output.txt");
			output(outputFile, e);
			outputFile.close();
			int* expected = new int[3];
			expected[0] = 1;
			expected[1] = 0;
			expected[2] = 0;
			for (int i = 0; i < 3; i++)
				Assert::IsTrue(expected[i]== actual[i]);
		}
	};
}