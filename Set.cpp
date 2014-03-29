// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Assignment 4
// Description: Cpp file for Set Object of Complex numbers 
// Filename:  Set.cpp 
// Last modified on: 3/31/2014
//  Created by: Dr. Monisha Pulimood

#include "Complex.h"
#include "Set.h"

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////
/*
	Constructor. Creates an empty Set object with arraySize = 0
*/
Set::Set(){
	arraySize = 0;

}
//////////////////////////////////////////////////////////////////////
/*
	adds a new Complex element to the array but only if element doesn't already exist
*/
Set operator+ (const Complex& lhs, Set& rhs){

	Set temp;
	temp = rhs;

	if(temp.isFull()){
		temp.throwError("Array is full. Object not added.");
		return rhs;
	}
	else{
		if ( rhs.find(lhs) < 0  ){
			//the lhs is not in the set, add it
			temp.array[temp.arraySize] = lhs;
			temp.arraySize = temp.arraySize+1;
		}
	}
	return temp;
	
}
//////////////////////////////////////////////////////////////////////
/*
	adds a new Complex element to the array but only if element doesn't already exist
*/
Set operator+ (Set& lhs,const Complex& rhs){
	return operator+(rhs,lhs);
}
//////////////////////////////////////////////////////////////////////
/*
	checks if set is empty
*/
bool Set::isEmpty(){
	if(arraySize == 0){
		return true;
	}
	else{
		return false;
	}
}
//////////////////////////////////////////////////////////////////////
/*
	checks if set is full
*/
bool Set::isFull(){
	if(arraySize >= ARRAY_LIMIT){
		return true;
	}
	else{
		return false;
	}
}
//////////////////////////////////////////////////////////////////////
/*
	Overloads the extraction operator for any instream: cin and fin
*/
istream& operator>>(istream& lhs, Set& rhs){
	
	int numofLines;//get the number of lines in the input stream
	if(!(lhs>>numofLines))
	{
		rhs.throwError("Input format was not valid");
	}
	else
	{
		//we know the number of objects so write a for loop
		for(int i=0; i<numofLines;i++){
			
			Complex tempComplex;
			lhs>>tempComplex;
			rhs = tempComplex + rhs;
		}
		
	}

	return lhs;
}
//////////////////////////////////////////////////////////////////////
/*
	replaces one set with rhs set
*/
Set& Set::operator= (const Set& rhs){

	/*cout<<"the real size: "<<arraySize<<endl;
	for(int i=0; i< rhs.arraySize; i++){
		array[i] = rhs.array[i];
		arraySize = arraySize +1;
	}*/

	if(this != &rhs){
		for(int i=0; i< rhs.arraySize; i++){
			this->array[i] = rhs.array[i];
		}
		this->arraySize = rhs.arraySize;
	}
	return *this;
}
//////////////////////////////////////////////////////////////////////
/*
	replaces one set with rhs value

void Set::operator= (const Complex& rhs){
	array[0] = rhs;
	arraySize = 1;
}*/
//////////////////////////////////////////////////////////////////////
/*
	Overloads the insertion operator to display the set
*/
ostream& operator<<(ostream& lhs, Set& rhs){
	//add beginning obj	
	if (rhs.arraySize == 0)
	{
		lhs<<"{ }";
	}
	else
	{
		lhs<<"{"<<rhs.array[0];
		for(int i=1; i<rhs.arraySize;i++){
			//go through the list
			lhs<<", "<<rhs.array[i];
		}
		//end the set output
		lhs<<"}";
	}
	return lhs;

}
		//TODO
		/*Set operator+ (const Set&) const;
		Set operator+ (const float) const;
		Set operator* (const Set&) const;
		*/


//////////////////////////////////////////////////////////////////////
/*
	PRIVATE: displays an error to the user and clears cin
*/
void Set::throwError(string msg){
	cout<<msg<<endl;
	cin.ignore(80000);
	cin.clear();
}
//////////////////////////////////////////////////////////////////////
/*
	PRIVATE: determines if the Complex obj is in the set
*/
int Set::find(Complex thisComplex){
	for(int i = 0; i<arraySize; i++){
		if (array[i] == thisComplex){
			return i;		
		}
	}
	return -1;
}




