#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Check if the array has at least 2 elements
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }

    // Declare the array
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize the largest and second largest
    int largest = INT_MIN, secondLargest = INT_MIN;

    // Find the largest and second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Check if a second largest element exists
    if (secondLargest == INT_MIN) {
        cout << "No second largest element found (all elements are the same)." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}

