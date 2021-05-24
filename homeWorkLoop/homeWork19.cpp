#include<iostream>

using namespace std;

int main(){
	int num, rev=0, one=1, two=2;
	cout<<"enter your number :";
	cin>>num;
	
	for(;num>0;num=num/10){
		rev=rev*10+num%10;
		switch(num){
			case 1:
				cout<<"one";
				break;
			case 2:
				cout<<"two";
				break;
			
	}
}
	return 0;

}
