// Name: Frankie Nwafili & Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Overloading Exercise
// Description: Class defintion for complex numbers 
// Filename:  Complex.h : complex numbers 
// Last modified on: 3/17/2014

/*
 
 DOCUMENTATION
////////////////////////////////////////////
 
 Complex(float=0, float=0):
    constructor: initalizes both vars to 0
 
////////////////////////////////////////////
 
friend Complex operator+(const float, const Complex&):
    adds a float to a complex object. i.e. the real components add and the imaginary component stays the same
    params: float - the float to add
            Complex& - the complex object to add to
    returns: Complex - returns the summation result

////////////////////////////////////////////

Complex operator+ (const Complex &) const:
    adds two complex numbers mathematically: the real components are added as floats, the imaginary numbers are grouped and added
    params: Complex& - the rhs
    returns: the summation result
 
////////////////////////////////////////////
 
friend istream& operator>>(istream&, Complex&):
    overrides the extration operator to input values into a complex object
    Example:
    67  89
    will be converted to a complex object displayed as 67+89i
    params: istream& - the stream to use/lhs
            Complex& the complex number to input the values into/rhs
    returns: the stream
 
////////////////////////////////////////////
 
friend ostream& operator<<(ostream&, Complex&):
     overrides the insertion operator to display the complex number appropriately
     Ruleset for displaying:
     Pair           Displayed Complex Number
     (4.6,7.8)      4.6+7.8i
     (3.2,0)        3.2
     (0,-2.5)       -2.5i
     ￼(-5.3,-9.1)   -5.3-9.1i
     (0,0)          0.0
 ￼    (-1,1)        -1.0+1.0i
    params: ostream& - the lhs stream to use
            Complex& - the complex object to display
    returns: the stream
 
////////////////////////////////////////////
 
bool operator== (const Complex&):
 compares two complex objects - the one this operator is calling on and the parameter. They are equal if both have the same real and imaginary parts
    params: Complex& - the rhs complex object
    returns: the comparitive result
 
////////////////////////////////////////////
*/

#if ! defined (COMPLEX_H)
#define COMPLEX_H

#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
private:
    float real;
        //the real component of the complex number
    float imag;
        //the imaginary component of the complex number
  
public:
    Complex(float=0, float=0);
    friend Complex operator+(const float, const Complex&);
    Complex operator+ (const Complex &) const;
    friend istream& operator>>(istream&, Complex&);
    friend ostream& operator<<(ostream&, Complex&);
    bool operator== (const Complex&);
    
};



#endif  // COMPLEX_H




