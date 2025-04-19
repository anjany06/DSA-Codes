#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cout << "Enter the n : ";
  cin >> n;
  int a = 1;
  for (int i = 1; i <= n; i += 1)
  {
    for (int j = 1; j <= i; j += 1)
    {
      cout << a << " ";
      a++;
    }
    cout << endl;
  }
  return 0;
}