// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Assignment 4
// Description: My test driver 
// Filename:  Driver.cpp
// Last modified on: 3/31/2014
//  Created by: Dr. Monisha Pulimood

#include <iostream>
#include "Complex.h"
#include "Set.h"

using namespace std;

int main(){
	cout<<"Welcome"<<endl;

	Complex testComplex(2,3);
	Complex testComplex2(0,3);

	Set test;
	cin>>test;
	cout<<test<<endl;
	
	//test = testComplex + test;
	//test = testComplex2 + test;
	test = testComplex + test;
	//Set test2;
	//test2 = test;
	cout<<test<<endl;

	return 0;
}


