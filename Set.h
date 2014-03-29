// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Assignment 4
// Description: Header file for Set Object 
// Filename:  Set.h 
// Last modified on: 3/31/2014
//  Created by: Dr. Monisha Pulimood

/*/////////////////////////////////////////////////
PUBLIC METHODS
/////////////////////////////////////////////////

	Set():
		Constructor. Creates an empty Set object with arraySize = 0

/////////////////////////////////////////////////
	
	friend Set operator+ (const Complex&, const Set&) const
		adds a new Complex element to the array but only if element doesn't already exist
		params: Complex& - the Complex object to add
			Set& - the set to add it to
		returns: Set of the complex + set

/////////////////////////////////////////////////

	friend Set operator+ (const Set&, const Complex&) const
		adds a new Complex element to the array but only if element doesn't already exist
		params: Complex& - the Complex object to add
			Set& - the set to add it to
		returns: Set of the complex + set

/////////////////////////////////////////////////
	
	bool isEmpty()
		checks if set is empty		
		returns true if arraySize  = 0

/////////////////////////////////////////////////
	
	bool isFull()
		checks if set is full, nothing more can be added
		returns true if arraySize  = ARRAY_LIMIT

/////////////////////////////////////////////////
	friend istream& operator>>(istream&, Set&):
		Overloads the extraction operator for any instream: cin and fin
		params: istream& - the istream used
			Set& - the set to input the data into

/////////////////////////////////////////////////

	Set& operator= (const Set&):
		replaces one set with lhs set
		params: Set& - the lhs of the operator
		returns: the set object on the lhs
/////////////////////////////////////////////////

	Set& operator= (const Complex&):
		replaces one set with lhs Complex object
		params: Complex& - the lhs of the operator
		returns: the set object on the lhs
/////////////////////////////////////////////////

	friend ostream& operator<<(ostream&, Set&):
		Overloads the insertion operator to display the set
		params: ostream& - the ostream used
			Set& - the set to read the data from

/////////////////////////////////////////////////*/
#include "Complex.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;


class Set
{
	

	public:

		Set();
		friend Set operator+ (const Complex&,Set&);
		friend Set operator+ (Set&,const Complex&);
		friend Set operator- (Set&, const Complex&);
		bool isEmpty();
		bool isFull();
		Set& operator= (const Set&);
		//Set& operator= (const Complex&);
		friend istream& operator>>(istream&, Set&);
		friend ostream& operator<<(ostream&, Set&);
		//TODO
		/*
		Set operator+ (const Set&) const;
		Set operator* (const Set&) const;
		*/
		
	private:
		static const int ARRAY_LIMIT = 100;
			//the maximum size of the array
		Complex array[ARRAY_LIMIT];
			//the array of complex objects with no duplicates and unsorted
		int arraySize;
			//keeps track of the valid elements in the array
		int find(Complex);
			//determines if the Complex obj is in the set
		void throwError(string);
			//displays an error to the user and clears cin


};
