#include<iostream>
using namespace std;

void toLower(char word[], int n){
  for(int i = 0; i < n; i++){
    char ch = word[i];
    if(ch >= 'a' && ch<='z'){
      continue;
    }
    else{
      word[i] = ch - 'A' + 'a';
    }
  }
  cout<<word;
}
int main(){
  char word[] = "SUBHAM";
  toLower(word, 6);
  return 0;
}