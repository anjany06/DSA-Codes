#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int x){
	int i;
	for(i=0;i<=n;i++){
		if(arr[i] == x){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[]= {1,2,3,4,5,56,78,89,34};
	int n = sizeof(arr)/4;
	int x = 44;
	int index = linearSearch(arr,n,x);
	cout<<index;
	return 0;
	
}
