#include <iostream>
using namespace std;

int main(){
//	cout << "I am Lucky. How many candies would you like?  ";
//	int ctemp = 0;
//	cin >> ctemp ;
//	cout << ctemp + " candies.";
	
//	double a;
//	double b;
//	double c;
//	double amount;

	double ctemp, ftemp;
	cout << "Input a Celsius temp and press Enter: ";
	cin >> ctemp;
	ftemp = (ctemp * 1.8) + 32;
	cout << "Fahrenheit temp is: " << ftemp;

	return 0;
}