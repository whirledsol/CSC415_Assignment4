#Will Rhodes
#Assignment 4
#CSC415: Dr. Pulimood


#runs the project
all: build
	./assignment4Exec

#builds the project
build: Complex.o Set.o setTestDriver.o
	g++ setTestDriver.o Complex.o Set.o -o assignment4Exec

# my testing
myTest: clean Complex.o Set.o Driver.o
	g++ Driver.o Complex.o Set.o -o test
	./test
	rm test



#make object files
Complex.o: Complex.cpp
	g++ -c Complex.cpp
Set.o: Set.cpp
	g++ -c Set.cpp
setTestDriver.o: setTestDriver.cpp
	g++ -c setTestDriver.cpp
Driver.o: Driver.cpp
	g++ -c Driver.cpp



#remove all object files and build
clean:
	rm -rf *.o build
