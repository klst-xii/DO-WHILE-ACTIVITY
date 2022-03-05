#include <iostream>
using namespace std;

int main() {
	int value;
	int multiple;
	int count = 1;
	
	cout << "Enter value: ";
	cin >> value;
	cout << "Enter multiple: ";
	cin >> multiple;
	
	do{
		cout << count << "\n";
		count = count + 1;
		
		if(count == multiple) {
			cout << "Multiple of " << multiple;
			return 0;
		}
	} while(count <= value);
	
	return 0;
	 
}
