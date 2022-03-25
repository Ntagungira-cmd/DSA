#include <iostream>
using namespace std;

// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int begin, int mid, int end){   
    cout<<"Merge Begins"<<endl;
	int sizeOfleftArr = mid - begin + 1;
	int sizeOfRightArr = end - mid;

	// Create temp arrays
	int leftArray[sizeOfleftArr];
    int rightArray[sizeOfRightArr];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (int i = 0; i < sizeOfleftArr; i++)
		leftArray[i] = array[begin + i];
	for (int j = 0; j < sizeOfRightArr; j++)
		rightArray[j] = array[mid + 1 + j];

	int leftIndexCount = 0; // Initial index of first sub-array
	int	rightIndexCount = 0; // Initial index of seub-array
	int indexOfMergedArray = begin; // Initial index of merged array

	// Merge the temp arrays back into array[left..right]
	while (leftIndexCount < sizeOfleftArr && rightIndexCount < sizeOfRightArr) {
		if (leftArray[leftIndexCount] <= rightArray[rightIndexCount]) {
			array[indexOfMergedArray] = leftArray[leftIndexCount];
			leftIndexCount++;
		}
		else {
			array[indexOfMergedArray] = rightArray[rightIndexCount];
			rightIndexCount++;
		}
		indexOfMergedArray++;
	}
	// Copy the remaining elements of
	// left[], if there are any
	while (leftIndexCount < sizeOfleftArr) {
		array[indexOfMergedArray] = leftArray[leftIndexCount];
		leftIndexCount++;
		indexOfMergedArray++;
	}
	// Copy the remaining elements of
	// right[], if there are any
	while (rightIndexCount < sizeOfRightArr) {
		array[indexOfMergedArray] = rightArray[rightIndexCount];
		rightIndexCount++;
		indexOfMergedArray++;
	}
}

// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int begin, int end){
    cout<<"Beginning mergeSort"<<endl;
	if (begin >= end)
		return; // Returns recursively

	int mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
}

// Driver code
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 ,};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Given array is \n";
    printArray(arr, arr_size);
  
    mergeSort(arr, 0, arr_size - 1);
  
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}


