#include<iostream>
using namespace std;
int main(){
	float income, finalIncome;
	cout<<"Enter your income : ";
	cin>>income;
	
	if(income<500000){
	cout<<"Final income is "<<income<<endl<<"Tax is 0%";	
	}
	else if(500000<income<1000000){
		finalIncome = (income-((income*20)/100));
		cout<<"Final income is : "<<finalIncome;
		cout<<"After deducting tax of 20%";
	}
	else{
		finalIncome = (income-((income*30)/100));
		cout<<"Final income is : "<<finalIncome;
		cout<<"/nAfter deducting tax of 30%"; 
	}
	return 0;
}
