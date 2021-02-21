#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int x, y;

	
	cout << "Anna kokonaisluku:";
	cin >> x;
	
	if (x % 2 == 0) 
		cout << "Luku " << x << " on parillinen." << endl;
	else
		cout << "Luku " << x << " on pariton." << endl;
	
	return 0;
}
