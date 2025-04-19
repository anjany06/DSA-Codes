#include<iostream>
using namespace std;

void reverse(char word[], int n){
  int start = 0, end = n - 1;
  while(start< end){
    swap(word[start], word[end]);
    start++;
    end--;
  }
  cout<<word;
}
int main(){
  char word[] = "code";
  reverse(word, 4);
  return 0;
}