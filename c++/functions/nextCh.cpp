#include<iostream>
using namespace std;
char nextCh(char ch){
	char next = (char)(ch + 1);
	return next;
}
int main(){
	char ch;
	cout<<"Enter a character : ";
	cin>>ch;
	if(ch == 'z'){
	cout<<"The next alphabet after z is a";;
	}
	else if(ch == 'Z'){
	cout<<"The next alphabet after Z is A";
	}
	else{
		cout<<"The next alphabet after "<<ch<<" is "<<nextCh(ch);
	}
	return 0;
}
