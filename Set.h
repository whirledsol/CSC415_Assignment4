// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Assignment 4
// Description: Header file for Set Object 
// Filename:  Set.h 
// Last modified on: 3/31/2014

/*/////////////////////////////////////////////////
 DOCUMENTATION
    PUBLIC METHODS
/////////////////////////////////////////////////

	Set():
		Constructor. Creates an empty Set object with arraySize = 0

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
		replaces a set object with a set of just the lhs Complex object
		params: Complex& - the lhs of the operator
		returns: the set object on the lhs

/////////////////////////////////////////////////
	
	Set operator+ (const Set&) const:
		creates the union of the two sets
		param: Set& - the rhs
		returns: Set - the union

/////////////////////////////////////////////////

	friend Set operator+ (const Complex&, Set&):
		adds a new Complex element to the array but only if element doesn't already exist
		params: Complex& - the Complex object to add
			Set& - the set to add it to
		returns: Set of the complex + set

/////////////////////////////////////////////////

	friend Set operator+ (Set&, const Complex&):
		adds a new Complex element to the array but only if element doesn't already exist
		params: Complex& - the Complex object to add
			Set& - the set to add it to
		returns: Set of the set+complex

/////////////////////////////////////////////////

	Set operator* (Set&):
		Finds the intersection between two sets: setA*setB
		params: Set& - rhs
		returns: setA*setB

/////////////////////////////////////////////////

	Set operator- (const Complex&):
		removes the complex obj from the set, if found
		params: Complex& - the element to remove
		returns: a set without the complex object

/////////////////////////////////////////////////

	friend ostream& operator<<(ostream&, Set&):
		Overloads the insertion operator to display the set
		params: ostream& - the ostream used
			Set& - the set to read the data from

/////////////////////////////////////////////////
	
	bool isEmpty()
		checks if set is empty		
		returns true if arraySize  = 0

/////////////////////////////////////////////////
	
	bool isFull()
		checks if set is full, nothing more can be added
		returns true if arraySize  = ARRAY_LIMIT

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
		friend istream& operator>>(istream&, Set&);
		Set& operator= (const Set&);
		Set& operator= (const Complex&);
		Set operator+ (const Set&);
		friend Set operator+ (const Complex&,Set&);
		friend Set operator+ (Set&,const Complex&);
		Set operator* (Set&);
		Set operator- (const Complex&);
		friend ostream& operator<<(ostream&, Set&);
		bool isEmpty();
		bool isFull();
		
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
