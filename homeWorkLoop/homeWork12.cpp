#include<iostream>

using namespace std;

int main(){
	int num,lDigit,fDigit,sum;
	cout<<"enter your numbers & will find your first and last digit of sum: ";
	cin>>num;
	lDigit = num%10;
	
	for(;num>10;num=num/10){
	}
	fDigit=num;
	sum=fDigit+lDigit;
	cout<<"Your sum of first & last digit is: "<<sum;
	return 0;
}


