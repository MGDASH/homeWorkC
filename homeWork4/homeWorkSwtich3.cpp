#include<iostream>

using namespace std;

int main(){
	char ch;
	cout<<"Enter your alphabet: ";
	cin>> ch;
	
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'));
	
	switch(ch){
		case 'a':
			cout<<"it is a vowel";
			break;
		case 'e':
			cout<<"it is a vowel";
			break;
		case 'i':
			cout<<"it is a vowel";
			break;
		case 'o':
			cout<<"it is a vowel";
			break;
		case 'u':
			cout<<"it is a vowel";
			break;
		default:
			cout<<"it is a consonant";	
	}
	return 0;
}
