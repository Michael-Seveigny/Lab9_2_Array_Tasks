/*
part 2.cpp
Michael Seveigny
10/30/2025
Description: Write array functions that carry out the following tasks for a passed array of integers:
• isSortedIncreasing: Returns true if the array is currently sorted in increasing order.
• isSortedDecreasing: Returns true if the array is currently sorted in decreasing order.
• hasAdjecentDuplicates: Returns true if the array contains two adjacent duplicate values.
• hasDuplicates: Returns true if the array contains duplicate values (which need not be adjacent).
Please remember that, for all of the above functions, you must specify both the array reference and the size of
the array, e.g.:
bool hasDuplicates( int values[], int size )
Write, test, and then commit each of these functions using hard-coded values in your
main function. An example commit messages would be “Completed isSortedIncreasing”
Provide a program that tests your functions via a loop construct for acquiring testing data for an array of six
elements (please note that the array functions must be written to handle any number of elements).
Example run (with user input indicated with bold italics):
Enter integer #0: 1
Enter integer #1: 2
Enter integer #2: 2
Enter integer #3: 4
Enter integer #4: 6
Enter integer #5: 7
The data are increasing.
The data are not decreasing.
The data has adjacent duplicates.
The data has duplicates.
Press any key to continue . . .
*/
#include <iostream>
using namespace std;

// Returns true if the array is sorted in increasing order
bool isSortedIncreasing(int values[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (values[i] > values[i + 1]) {
			return false;
		}
	}
	return true;
}

// Returns true if the array is sorted in decreasing order
bool isSortedDecreasing(int values[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (values[i] < values[i + 1]) {
			return false;
		}
	}
	return true;
}

// Returns true if the array has adjacent duplicates
bool hasAdjacentDuplicates(int values[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (values[i] == values[i + 1]) {
			return true;
		}
	}
	return false;
}

// Returns true if the array has any duplicates at all
bool hasDuplicates(int values[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (values[i] == values[j]) {
				return true;
			}
		}
	}
	return false;
}

int main(void) {
	// Declare variables
	const int Size = 6;
	int arr[Size];

	// Get user input
	for (int i = 0; i < Size; i++) {
		cout << "Enter integer #" << i << ": ";
		cin >> arr[i];
	}

	// Test and display results
	if (isSortedIncreasing(arr, Size)) {
		cout << "The data are increasing." << endl;
	}
	else {
		cout << "The data are not increasing." << endl;
	}
	if (isSortedDecreasing(arr, Size)) {
		cout << "The data are decreasing." << endl;
	}
	else {
		cout << "The data are not decreasing." << endl;
	}
	if (hasAdjacentDuplicates(arr, Size)) {
		cout << "The data has adjacent duplicates." << endl;
	}
	else {
		cout << "The data does not have adjacent duplicates." << endl;
	}
	if (hasDuplicates(arr, Size)) {
		cout << "The data has duplicates." << endl;
	}
	else {
		cout << "The data does not have duplicates." << endl;
	}
	return 0;
}





