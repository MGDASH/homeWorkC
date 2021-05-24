#include<iostream>

using namespace std;

int main(){
	int num, reverse=1, lDigit,num1;
	cout<<"input your numbers to check palindrome number :";
	cin>>num;//12321
	lDigit = num%10;
	num1= num;
	
	for(;num>0;num=num/10){
		reverse = reverse*10 + num%10;
	}
	
	if(num1==reverse){
		cout<<"it is palindrome number";
	}else{cout<<"it is not palindrome number";
	}	
	
	return 0;
}

//num aa num1 ruugaa copydoj chadsangui ee bagshaa. hariu buruu garaad dandaa not palindrome number gej garaad bna
