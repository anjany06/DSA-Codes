#include<iostream>
using namespace std;
int main(){
	string s;
	int i;
	cout<<"Enter a string : ";
	getline(cin,s);
	
	for(i=0;i<s.length();i+=2){
			s[i] = '0';
	}
	cout<<s;
	return 0;
}
