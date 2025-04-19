#include <iostream>
#include <climits>
using namespace std;

void maxSubArrProduct(int nums[], int n)
{
  int maxProduct = nums[0];
  int minProduct = nums[0];
  int result = nums[0];

  for (int i = 1; i < n; i++)
  {
    if (nums[i] < 0)
    {
      swap(maxProduct, minProduct);
    }

    maxProduct = max(nums[i], maxProduct * nums[i]);
    minProduct = min(nums[i], minProduct * nums[i]);

    result = max(result, maxProduct);
  }

  cout << result;
}

int main()
{
  int arr[] = {0, 2};
  int n = 2;
  maxSubArrProduct(arr, n);
  return 0;
}