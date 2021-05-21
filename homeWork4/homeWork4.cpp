#include<iostream>

using namespace std;

int main(){
	int too;
	cin>>too;
	
	if((too%5==0)&&(too%11==0)){
			cout<<"divisible by 5 and 11";	
		}else{
			cout<<"not divisible by 11 nor 5";
		}

	return 0;
}
