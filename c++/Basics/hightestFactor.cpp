#include <iostream>
using namespace std;

// Function to find the highest factor of a number (excluding itself)
int highestFactor(int n) {
    // Start from the largest possible factor (n-1) and go downwards
    for (int i = n - 1; i >= 1; i--) {
        if (n % i == 0) {
            return i; // Return the highest factor
        }
    }
    return 1; // If no other factor is found, return 1
}

int main() {
    int number;

    // Input: Get the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Calculate the highest factor
    int factor = highestFactor(number);

    // Output the result
    cout << "The highest factor of " << number << " (excluding itself) is: " << factor << endl;

    return 0;
}