#include<iostream>

using namespace std;

int main(){
	double costPrice, sellingPrice, profit, loss;
	cout<<"input your cost price: ";
	cin>> costPrice;
	cout<<"input your selling price: ";
	cin>> sellingPrice;
	profit = sellingPrice - costPrice;
	loss = costPrice - sellingPrice;
	
	if(profit && profit>0){
		cout<<"your total profit is: "<<profit;
	}if(loss && loss>0){
		cout<<"your total loss is: "<<loss;
	}
	return 0;
}
