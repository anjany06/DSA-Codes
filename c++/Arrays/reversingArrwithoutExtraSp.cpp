#include<iostream>
using namespace std;
void printArr(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<", ";
	}
	cout<<endl;
}
int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/4;
	
	int start = 0, end = n-1;
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	
	printArr(arr,n);
	return 0;
}
