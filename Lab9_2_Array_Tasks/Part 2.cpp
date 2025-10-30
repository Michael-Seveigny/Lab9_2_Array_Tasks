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
	int arr1[] = { 1, 2, 3, 4, 5 };
	cout << "arr1 is sorted increasing: " << isSortedIncreasing(arr1, 5) << endl;

}
