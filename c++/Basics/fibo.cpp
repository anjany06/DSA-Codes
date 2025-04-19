#include<iostream>
using namespace std;
int main(){
	int first = 0;
	int sec = 1;
	cout<<first<<" "<<sec<<" ";
	int i,n=15;
	for(i=2;i<n;i++){
		int third = first + sec;
		cout<<third<<" ";
		
		first = sec;
		sec = third;
	}
	cout<<endl;
}
