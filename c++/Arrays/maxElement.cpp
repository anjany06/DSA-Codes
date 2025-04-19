#include<iostream>
using namespace std;
voidfindMax(int arr[], int n){
	int min = arr[0];
	int i;
	for(i=0;i<=n;i++){
		if(min >arr[i]){
			min = arr[i];
		}
	}
	cout<<"The minimum element is : "<<min;
}
int main(){
	int n,i;
	int arr[n];
	cin>>n;
	for(i=0;i<=n;i++){
		cin>>arr[i];
	}
	findMax(arr,n);
	return 0;
}
