/* WAP to input 10 floating values from user and show the smallest and 
biggest numbers in given values */

#include <iostream>
using namespace std;
main(){
	float num[10],smallest_num, largest_num;
	cout << "Enter 10 float numbers: ";
	cin >> num[0];
	smallest_num=largest_num=num[0];
	for(int i=1;
	i<10;
	i++){
		cin>> num[i];
		if (num[i]<smallest_num) smallest_num=num[i];
		if (num[i]>largest_num) largest_num=num[i];
	}
	cout << "smallest num: " <<smallest_num <<endl;
	cout << "largest num: " <<largest_num <<endl;
	return 0;
}
