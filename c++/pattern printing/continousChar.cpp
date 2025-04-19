#include<iostream>
using namespace std;
int main(){
	int i, j, num = 64;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			cout<<(char)(num+j);
		}
		num++
		cout<<endl;
	}
}
