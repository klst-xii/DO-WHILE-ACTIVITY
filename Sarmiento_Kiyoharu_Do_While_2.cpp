#include <iostream>
using namespace std;

int main() {
	
	double numbers;
	double total;
	
	cout << "Enter a number: ";
	cin >> numbers;
		
	do {
		total += numbers;
		
		cout << "Enter a number: ";
		cin >> numbers;
	} while (numbers >= 0);
	
	
	cout << "\nThe sum is " << total;
	
	return 0;
}
