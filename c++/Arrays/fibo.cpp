#include<iostream>
using namespace std;

int main(){
	int a=0;
	int b=1;
	cout<<a<<b<<" ";
	int i;
	for(i=0;i<=10;i++){
		b = a;
		int c = a + b;
		cout<<c<<" ";
	}
	return 0;
}
