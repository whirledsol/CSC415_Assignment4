#######################################################
Name: Will Rhodes
Course: CSC 415
Semester: Spring 2014
Instructor: Dr. Pulimood
Exercise : Assignment 4
Last modified on: 4/1/2014

#######################################################
Description: 
	
	Utilizes a Complex class which represents mathematical complex numbers with a real and imaginary component.
	The Complex.h and Complex.cpp file overrides common operators to integrate the class with common mathematical operations:
	
		myfloat + myComplex1 = myComplex2
		myComplex1 + myComplex2 = myComplex3
		cout<<myComplex
		cin>>myComplex
		myComplex1 == myComplex2
		
	A Set class is constructed to hold Complex objects. A set is an array with no duplicates. The items in the set are typically not sorted.
	For the requirements of this package, the set utilizes a fixed-size array of size 100. This size can be changed in Set.h.
	
	While the Set class is currently implemented for Complex objects, it can be easily modified for other objects by changing the class types.
	
	The set class includes overrides for certain operators such as:
		
		setA + setB = unionSet
		setA * setB = intersectionSet
		setA + myComplex = newSetWithComplex
		myComplex + setA = newSetWithComplex
		setA - myComplex = newSetWithoutComplex
		cin>>setA
		cout<<setA
		etc...
	For more documentation, please see the .h files.
	
	
	A Driver (setTestDriver.cpp) is provided to test all functionality. Please see and run the driver for additional comments.
	Driver.cpp is used for testing purposes.
	
	
		
		
		