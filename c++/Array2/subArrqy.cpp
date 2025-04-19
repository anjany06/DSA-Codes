#include <iostream>
#include <climits>
using namespace std;

void maxSubArraySum(int arr[], int n)
{
	int maxSum = INT_MIN;
	int currSum = 0;
	int start, end, i;
	for (i = 0; i < n; i++)
	{
		currSum += arr[i];
		maxSum = max(maxSum, currSum);
		if (currSum < 0)
		{
			currSum = 0;
		}
	}
	cout << "The maximum sum of sub array is " << maxSum;
}
int main()
{
	int arr[] = {5, -6, 7, -8, 9};
	int n = sizeof(arr) / 4;
	maxSubArraySum(arr, n);
	return 0;
}
