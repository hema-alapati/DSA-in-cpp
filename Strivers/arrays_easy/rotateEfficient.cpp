// C++ program to rotate right an array by K times
// The approach is simple yet optimized.
//  The idea is to reverse the array three times. 
// For the first time we reverse only the last k elements. 
// Second time we will reverse first n-k(n=size of array) elements. 
// Finally we will get our rotated array by reversing the entire array.

#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3; //No. of rotations
	k = k % n;
	int i, j;
	// Reverse last k numbers
	for (i = n - k, j = n - 1; i < j; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	// Reverse the first n-k terms
	for (i = 0, j = n - k - 1; i < j; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	// Reverse the entire array
	for (i = 0, j = n - 1; i < j; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	// Print the rotated array
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}


//this code is taken from gfg
// https://www.geeksforgeeks.org/print-array-after-it-is-right-rotated-k-times/