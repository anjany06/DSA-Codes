#include<iostream>
using namespace std;
int main(){
	int i, j, n=5;
	for(i=1;i<=n;i++){
		//space
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(j=1;j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
