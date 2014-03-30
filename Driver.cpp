// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Assignment 4
// Description: My test driver 
// Filename:  Driver.cpp
// Last modified on: 3/31/2014
//  Created by: Dr. Monisha Pulimood
/*

#include <iostream>
#include "Complex.h"
#include "Set.h"

using namespace std;

int main(){
	cout<<"Welcome"<<endl;

	Complex testComplex(2,3);
	Complex testComplex2(0,3);

	Set test;
	Set test2;
	Set removed;
	Set intersection;
	Set confederacy;
	
	ifstream fin;
	fin.open("input.txt");
	
	
	fin >> test2;
	cout<<"Test2: "<<test2<<endl;

	cout<<"Input # of complex and components:"<<endl;
	cin>>test;

	//add the two complex numbers in different ways
	test = testComplex + test;
	test = test + testComplex2;

	
	removed	= test2 - testComplex2;
	confederacy = test2 + test;
	intersection = test * test2;

	cout<<"union:"<<confederacy<<endl;
	cout<<"removed:"<<removed<<endl;
	cout<<"intersection:"<<intersection<<endl;

 	test= testComplex;
	cout<<"Set of 1: "<< test<<endl;

	fin.close();
	return 0;
}

*/
