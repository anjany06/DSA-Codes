#include <iostream>
using namespace std;

void print(int x, int n)
{
  if (x > n)
  {
    return;
  }

  cout << x << endl;
  print(x + 1, n);
}
int main()
{
  int a;
  cin >> a;
  print(1, a);
   return 0;
}