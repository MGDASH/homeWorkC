#include<iostream>

using namespace std;

int main(){
	int num,product=1,lDigit;
	cout<<"Enter your product numbers :";
	cin>>num;
	lDigit=num%10;
	
	for(;num>0;num=num/10){
		product = product*num%10;
	}
	cout<<"your product of digit is :"<<product;
	return 0;
}
