#include <iostream>
using namespace std;

int main() {
    int i,n=5;
    int a[5] ={1,2,3,4,5};
    int b[n];
    for(i=0;i<n;i++){
    	b[i] = a[n-1-i];
    	cout<<b[i]<<" ";
	}
	return 0;
}
    
