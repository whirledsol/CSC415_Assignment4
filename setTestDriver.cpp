//  setTestDriver.cpp

//  Skeleton of driver program to test the implementation of the
//  Set class
//  To demonstrate operator overloading and aggregation
//  Programmed by: Dr. Monisha Pulimood
//  Modified by: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Assignment 4
// Description: Test driver 
// Filename:  Driver.cpp
// Last modified on: 3/31/2014
/*
#include <iostream>
#include "Set.h"

using namespace std;

int main()
{
	cout << "Welcome to the Set Manipulation Program" << endl;
	cout << "In this program a Set has only complex numbers" << endl;
	cout << "The maximum number of elements in a Set is 100.";
	cout << "Duplicate elements will be ignored" << endl;
	
	Set setA, setB, setC, setD, setE;
	Complex C1 (6.5, 7.8);
	bool done = false;
	string inFileName;
	
	while (!done)
	{
		
		// DO: declare the input file stream object
		
		// test isEmpty() method
		
		if (setA.isEmpty())
			cout << "setA is empty" << endl;
		else
			cout << "setA is not empty" << endl;
		
		// test isFull() method
		
		if (setB.isFull())
			cout << "setB is full" << endl;
		else
			cout << "setB is not full" << endl;
		
		
		// test overloaded >> operator - enter data from the keyboard
		
		cout << "Enter data into Set A" << endl;
		cout << "Enter number of elements in Set A, followed by the elements." << endl;
		cout << "Separate elements with a whitespace" << endl;
		cout << "To enter a complex number enter only the real and imaginary parts" << endl;
		cout << "For example enter '4 8' to represent '4 + 8i'" << endl;
		
		cin >> setA;
		
		// test overloaded >> operator - enter data from a file
		
		cout << "Input a filename to read data into Set B" << endl;
		cin >> inFileName;
		cout << "The file should have the number of elements, followed by the elements." << endl;
		cout << "Separate elements with a whitespace" << endl;
		
		// DO: Add code to open the file to read from.
		
		// The statement below assumes the input file stream object is called fin
		
		fin >> setA;
		
		
		// test the overloaded << operator
		cout << "setA is " << setA << endl;
		cout << "setB is " << setB << endl;
		
		
		// test isEmpty() method
		
		if (setA.isEmpty())
			cout << "setA is empty" << endl;
		else
			cout << "setA is not empty" << endl;
		
		// test isFull() method
		
		if (setB.isFull())
			cout << "setB is full" << endl;
		else
			cout << "setB is not full" << endl;
		
		cout << endl;
		
		
		// test the assignment operator
		setC = setB;
		cout << "setC = setB is " << setC << endl;
		
		setD = C1;
		cout << "setD = C1 is " << setD << endl;
		
		
		// test the + operator
		
		setD = setA + setB;
		cout << "The union of Set A and Set B (setA + setB) is " << setD << endl;
		
		setA = setA + C1;
		cout << "After adding a complec number to the set, Set A is " << setA << endl;
		
		setD = C1 + setD;
		cout << "After adding a complec number to the set, Set A is " << setA << endl;
		
		// test the * operator
		
		setE = setC * setD;
		cout << "The intersection of Set C and Set D (setC * setD) is " << setE << endl;
		
		setE = setB * setC;
		cout << "The intersection of Set B and Set C (setB * setC) is " << setE << endl;
		
		// test isEmpty() method
		
		if (setD.isEmpty())
			cout << "setD is empty" << endl;
		else
			cout << "setD is not empty" << endl;
		
		// test isFull() method
		
		if (setD.isFull())
			cout << "setD is full" << endl;
		else
			cout << "setD is not full" << endl;
		
		
		if (setE.isEmpty())
			cout << "setE is empty" << endl;
		else
			cout << "setE is not empty" << endl;
		
		// test isFull() method
		
		if (setE.isFull())
			cout << "setE is full" << endl;
		else
			cout << "setE is not full" << endl;
		
		// test the - operator
		
		cout << "After removing C1, setA is " << setA << endl;
		
		// display all sets
		cout << "setA is " << setA << endl;
		cout << "setB is " << setB << endl;
		cout << "setC is " << setC << endl;
		cout << "setD is " << setD << endl;
		cout << "setE is " << setE << endl;

		
		cout << "Do you want to continue playing (y/n)?" << endl;
		char more;
		cin >> more;
		switch (more)
		{
			case 'y':
				done = false;
				break;
			case 'n':
				done = true;
				break;
			default:
				done = false;
		}
		
	}
	
	cout << "Thanks for using this program." << endl;
	cout << "Goodbye! " << endl;
}

*/
