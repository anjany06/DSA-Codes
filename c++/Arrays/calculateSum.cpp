#include <iostream>
using namespace std;

int sum(int a[], int n)
{
  int s = 0;
  for (int i = 0; i <= n; i++)
  {
    s += a[i];
  }
  return s;
}
int main()
{
  int n;
  int a[n];
  cout << "Enter the number of items : ";
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    cin >> a[i];
  }
  cout << "Sum of the array is : " << sum(a, n);
  return 0;
}
