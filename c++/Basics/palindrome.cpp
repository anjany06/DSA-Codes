#include<iostream>
using namespace std;

bool palindrome(int n){
	int num = n;
	int reverse = 0;
	while(n !=0){
		int ld = n%10;
	    reverse = reverse * 10 + ld;
		n = n/10;
	}
	if(reverse == num){

return true;
	}
	else{

return false;
	}
}
int main(){
	int n;
	cout<<"Enter a number to check : ";
	cin>>n;
	bool result = palindrome(n);
	if(result){
		cout<<n<<" is a palindrome";
	}else{
		cout<<n<<" is not  palindrome";
	}
	return 0;
}
