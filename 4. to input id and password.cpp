#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	string userid, password, enteredpass;
	char ch;
	
	string correctuserid="daljit";
	string correctpassword="123456";
	cout<<"Your User ID: ";
	cin>> userid;
	cout<<"Enter your Password: ";
	ch= _getch();
	
	while(ch !=13){
		enteredpass.push_back(ch);
		cout<< "$";
		ch=_getch();
	}
	if (userid==correctuserid && enteredpass==correctpassword){
		cout<< "\nWelcome to Secure System" <<endl;
	}
	else{
		cout<<"\nAuthentication Failed" <<endl;
	}
	return 0;
}
