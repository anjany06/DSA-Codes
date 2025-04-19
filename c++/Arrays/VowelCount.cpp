#include<iostream>
using namespace std;
int main(){
	string s;
	int i;
	cout<<"Enter a string : ";
	getline(cin,s);
	int count = 0;
	for(i=0;i<s.length();i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			count++;
		}
	}
	cout<<count;
	
	return 0;
}
