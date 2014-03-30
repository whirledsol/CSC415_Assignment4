#Will Rhodes
#Assignment 4
#CSC415: Dr. Pulimood




#TODO: write the gtest directory file here
GTEST_DIR = ../gtest-1.7.0

# the compiler doesn't generate warnings in Google Test headers.
CPPFLAGS += -isystem $(GTEST_DIR)/include
# Flags passed to the C++ compiler.
CXXFLAGS += -g -Wall -Wextra -pthread
#headers
GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h
# Usually you shouldn't tweak such internal variables, indicated by a
# trailing _.
GTEST_SRCS_ = $(GTEST_DIR)/src/*.cc $(GTEST_DIR)/src/*.h $(GTEST_HEADERS)

#####################################################################################
#runs the project
all: build
	./assignment4Exec

#builds the project
build: Complex.o Set.o setTestDriver.o
	g++ setTestDriver.o Complex.o Set.o -o assignment4Exec

# my testing
myTest: Complex.o Set.o Test.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread Test.o Complex.o Set.o -o test
	./ test
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
Test.o: Test.cpp $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) Test.cpp



#remove all object files and build
clean:
	rm -rf *.o build
