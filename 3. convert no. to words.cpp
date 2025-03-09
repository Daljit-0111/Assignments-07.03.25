// WAP to input a number and print that number into words like 123 as One Two Three
#include<iostream>
using namespace std;
void printdigitsintowords(int number){
	string words[]={
		"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven"
	};
	if(number==0){
		cout << words[0];
		return;
	}
	while(number>0) {
		int digit=number%8;
		cout<<words[digit] << " ";
		number /=8;
	}
}
main(){
	int number;
	cout<< "Enter any no: ";
	cin>>number;
	
	cout<< "No. in words: ";
	printdigitsintowords(number);
	
	return 0;
}
