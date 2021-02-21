#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int x, y;
	double z;
	
	cout << "Anna ensimmäinen kateetti:";
	cin >> x;
	
	cout << "Anna toinen kateetti:";
	cin >> y;
	
	z = x * x + y * y;
	z = sqrt(z);
	
	cout << "Hypotenuusan pituus: " << z << endl;
	
	return 0;
}
