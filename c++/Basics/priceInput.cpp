#include<iostream>
using namespace std;
int main(){
	float pen, pencil, eraser;
	cout<<"Enter the price of pen pencil and eraser respectively : ";
	cin>>pen>>pencil>>eraser;
	
	float totalPrice = pen + pencil +eraser;
	float gst = (totalPrice/100)*18;
	float finalPrice = totalPrice+ gst; 
	cout<<"The total price is : "<<totalPrice<<endl<<" After Gst of "<<gst<<endl<<" Final price to be pay is "<<finalPrice;
	
	
	return 0;
}
