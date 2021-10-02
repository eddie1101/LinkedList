#include <iostream>
#include <string>

#include "LinkedList.h"
#include "LinkedNode.h"

using namespace std;

LinkedList<string>* testList = new LinkedList<string>();

bool TestAdd() {

	testList -> Add("0");
	testList -> Add("1");
	testList -> Add("2");

	return testList -> Get(0) == "0" &&
		testList -> Get(1) == "1" &&
		testList -> Get(2) == "2" &&
		testList -> Size() == 3;

}

bool TestSet() {

	testList -> Set(1, "10");

	return testList -> Get(1) == "10";

}

bool TestInsert() {

	testList -> Insert(2, "2.5");

	return testList -> Get(1) == "10" &&
		testList -> Get(2) == "2.5" &&
		testList -> Get(3) == "2" &&
		testList -> Size() == 4;

}

bool TestRemove() {

	testList -> Remove(1);

	return testList -> Get(0) == "0" &&
		testList -> Get(1) == "2.5" &&
		testList -> Get(2) == "2" &&
		testList -> Size() == 3;

}



int main() {

	int numTests = 4, testsPassed = 0;
	bool passed;

	cout << "Testing LinkedList<string>" << endl;
	cout << "\tTesting LinkedList<string>::Add(string): ";

	passed = TestAdd();
	if(passed) testsPassed++;

	cout << (passed ? "PASS" : "FAIL") << endl;

	cout << "\tTesting LinkedList<string>::Set(int, string): ";

	passed = TestSet();
	if(passed) testsPassed++;

	cout << (passed ? "PASS" : "FAIL") << endl;

	cout << "\tTesting LinkedList<string>::Insert(int, string): ";

	passed = TestInsert();
	if(passed) testsPassed++;

	cout << (passed ? "PASS" : "FAIL") << endl;

	cout << "\tTesting LinkedList<string>::Remove(int): ";

	passed = TestRemove();
	if(passed) testsPassed++;

	cout << (passed ? "PASS" : "FAIL") << endl;

	cout << "Tests Run: " << numTests << "\nTests Passed: " << testsPassed << "\nTests Failed: " << numTests - testsPassed << endl;

}



