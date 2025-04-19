#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter number : ";
  cin >> n;
  bool flag = true;
  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      flag = false;
    }
  }
  if (flag)
  {
    cout <<n<<" is prime";
  }
  else
  {
    cout <<n<<" is not prime";
  }
  return 0;
}