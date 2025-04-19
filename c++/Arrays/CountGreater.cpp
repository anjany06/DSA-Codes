#include<iostream>
using namespace std;

void findLarge(int arr[], int l, int n){
	int count = 0;
	int i;
	for(i=0;i<=l;i++){
		if(arr[i]>n){
			count++;
		}
	}
	cout<<"The number that are greater than "<<n<<" are "<<count;
}

int main(){
	int i,l,n;
	int arr[i];
	cout<<"Enter the number of elements in the array : ";
	cin>>l;
	for(i = 0;i<=l;i++){
		cin>>arr[i];
	}
	cout<<"Enter the number to check : ";
	cin>>n;
	findLarge(arr,l,n);
	return 0;
}
