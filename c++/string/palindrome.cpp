#include <iostream>
using namespace std;

bool palindrome(char word[], int n)
{
  int start = 0, end = n - 1;
  while (start <= end)
  {
    if (word[start] != word[end])
    {
      return false;
    }

    start++;
    end--;
  }
  return true;
}
int main()
{
  char word[] = "abcba";
  bool result = palindrome(word, 4);
  if (result)
  {
    cout << "The word is a palindrome.";
  }
  else
  {
    cout << "The word is not a palindrome.";
  }
  return 0;
}