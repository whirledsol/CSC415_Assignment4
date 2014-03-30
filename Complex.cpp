// Name: Frankie Nwafili & Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Overloading Exercise
// Description: Member function definition file for complex numbers 
// Filename: Complex.cpp : complex numbers 
// Last modified on: 3/17/2014
//  Created by: Dr. Monisha Pulimood


#include "Complex.h"
#include <iostream>
#include <iomanip>
using namespace std;


//CONSTRUCTOR with default params
Complex::Complex (float r, float i)
{
  real = r;
  imag = i;
}

//operator+: overwrites the addition operator between a float and complex obj
Complex operator+(const float lhs, const Complex &rhs){
  Complex res;
  res.real = lhs + rhs.real;
  res.imag = rhs.imag;
  return res;
}


//operator+: overwrites the addition operator for two Complex objs
Complex Complex::operator+ (const Complex &rhs) const{
  Complex res;
  res.real = real + rhs.real;
  res.imag = imag + rhs.imag;
  return res;
}


//operator>>: overwrites the extraction operator for the Complex obj
istream& operator>>(istream& lhs, Complex& rhs){
      lhs>>rhs.real>>rhs.imag;
      return lhs;


}


//operator<<: overwrites the insertion operator for the Complex obj
ostream& operator<<(ostream& lhs, Complex& rhs){

     if(!(rhs.real==0.0 && rhs.imag != 0.0)){
      lhs << setprecision(1)<<fixed<<rhs.real;
     }
      //determines the sign for the imaginary component
      if(rhs.imag == 0){
        return lhs;
      }
      else if (rhs.imag < 0){
        lhs << "-";
      }
      else{
        lhs << "+";
      }

      lhs << abs(rhs.imag) << "i";

      return lhs;

}

//operator==: checks to see if two complex objects are equal
bool Complex::operator== (const Complex& rhs){
	
	if(real == rhs.real && imag == rhs.imag){
		return true;
	}
	else{
		return false;
	}


}

