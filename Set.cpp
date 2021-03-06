// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Assignment 4
// Description: Cpp file for Set Object of Complex numbers 
// Filename:  Set.cpp 
// Last modified on: 3/31/2014

#include "Complex.h"
#include "Set.h"

#include <fstream>
#include <iostream>
#include <string>
#include <climits>
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
	creates the union between two sets
*/
Set Set::operator+ (const Set& rhs){
	
	//store in a third array
	Set temp;
	//get elements from the lhs
	for(int i = 0; i<arraySize; i++){
		temp = temp + array[i];
	}
	//go through rhs
	for(int i = 0; i< rhs.arraySize; i++){
		//check to see if the array is full here to display custom message
		if(temp.isFull()){
			temp.throwError("* Could not obtain the union. Array is full.");
			//return the full array with as many union elements as we can muster
			return temp;
		}
		//array is not full, add the element from the second array
		temp = temp + rhs.array[i];
	}
	
	return temp;

}
//////////////////////////////////////////////////////////////////////
/*
	adds a new Complex element to the array but only if element doesn't already exist
*/
Set operator+ (const Complex& lhs, Set& rhs){

	//store in a third array
	Set temp;
	temp = rhs;
	
	//check to see if we go over the array length
	if(temp.isFull()){
		temp.throwError("* Array is full. Object not added.");
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
	adds a new Complex element to the array but only if element doesn't already exist
*/
Set Set::operator- (const Complex& rhs){

	//find the element in the set
	int location = find(rhs);
	if(location < 0){
		//element not found
		throwError("* Item not in Set.");
		return *this;
	}
	else{
		//we found the item in the set

		//create a temp set, which is a copy of lhs
		Set temp;
		temp = *this;
		//replace the last element with the found element and subtract total size
		temp.array[location] = temp.array[temp.arraySize-1];
		temp.arraySize = temp.arraySize - 1;
		return temp;
	}
	
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
		rhs.throwError("* Input format was not valid");
        cin.clear(); //clear error flags
        cin.ignore(INT_MAX,'\n'); //flush the buffer
	}
	else
	{
		//we know the number of objects so write a for loop
		for(int i=0; i<numofLines;i++){
			//check to see if we are going out of the bounds of the file
			if(lhs.eof()){
				rhs.throwError("* Reached the end of the file.");
				return lhs;			
			}
			//use Complex obj's extraction override			
			Complex tempComplex;
			lhs>>tempComplex;
            //check to see if the set is full first
            if(!rhs.isFull()){
                                rhs = tempComplex + rhs;
            }
            else{
                rhs.throwError("* Array is full. Object not added.");
                return lhs;
            }
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
*/
Set& Set::operator= (const Complex& rhs){
	array[0] = rhs;
	arraySize = 1;
	return *this;
}
//////////////////////////////////////////////////////////////////////
/*
	Overloads the insertion operator to display the set
*/
ostream& operator<<(ostream& lhs, Set& rhs){
	//add beginning obj	
	if (rhs.arraySize == 0)
	{
		lhs<<"{}";
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
//////////////////////////////////////////////////////////////////////
/*
	Overloads the * operator to find the intersection of two sets
*/
Set Set::operator* (Set& rhs){

	//create a temporary set
	Set temp;
	//go through "lhs" array
	for (int i = 0; i<arraySize;i++){
		if(rhs.find(array[i]) >= 0){
			//the element in the lhs array is found in the rhs array
			//add to temp
			temp = temp + array[i];
		}

	}
	return temp;
}

//////////////////////////////////////////////////////////////////////
/*
	PRIVATE: displays an error to the user and clears cin
*/
void Set::throwError(string msg){
	cout<<msg<<endl;
	
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




