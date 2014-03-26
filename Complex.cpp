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

/*
//////////////////////////
//   PART ONE
//////////////////////////

//addComplex(const Complex&): adds two complex numbers
const Complex Complex::addComplex(const Complex& rhs) const{
  Complex res;
  res.real = real + rhs.real;
  res.imag = imag + rhs.imag;

  return res;
}


//addComplex(const float, const Complex&): adds a real number (float) and a complex number
Complex addComplex(const float lhs, const Complex& rhs){
  Complex result;
  result.real = lhs + rhs.real;
  result.imag = rhs.imag;

  return result;
}


//inputComplex(): mutator to assign the attrs to the complex number
void Complex::inputComplex() {
  cin >> real;
  cin >> imag;
}



//displayComplex(): Displays the complete complex number using fixed 1 precision
void Complex::displayComplex() {

  if(!(real==0.0 && imag != 0.0)){
      cout << setprecision(1)<<fixed<<real;
  }

  //determines the sign for the imaginary component
  if(imag == 0){
    return;
  }
  else if (imag < 0){
    cout << "-";
  }
  else{
    cout << "+";
  }

  cout << abs(imag) << "i";
}



*/
///////////////////////////////////////
//    PART TWO
//////////////////////////////////////


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

