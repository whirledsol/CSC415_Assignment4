// Name: Frankie Nwafili & Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Overloading Exercise
// Description: Class defintion for complex numbers 
// Filename:  Complex.h : complex numbers 
// Last modified on: 3/17/2014
//  Created by: Dr. Monisha Pulimood

#if ! defined (COMPLEX_H)
#define COMPLEX_H

#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
private:
    float real;
    float imag;
  
public:
    Complex(float=0, float=0);

    /*//PART ONE
    const Complex addComplex(const Complex &) const;
    void displayComplex();
    void inputComplex();
    friend Complex addComplex(const float, const Complex&);
    
    */
    //PART TWO
    friend Complex operator+(const float, const Complex&);
    Complex operator+ (const Complex &) const;
    friend istream& operator>>(istream&, Complex&);
    friend ostream& operator<<(ostream&, Complex&);
    
};



#endif  // COMPLEX_H




