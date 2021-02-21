#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int ika;
	char spuoli;
	
	cout << "Oletko mies vai nainen (m/n)";
	cin >> spuoli;
	
	cout << "Anna ikäsi:";
	cin >> ika;
	
	if (spuoli == 'm') {
		if (ika < 56 && ika > 0) {
			cout << "Olet mies parhaassa iässä!";
		} else if (ika > 55 && ika < 101) {
			cout << "Olet viisas mies!";
		} else {
			cout << "Ohjelmassa tapahtunut virhe!";
		}
	} else {
		if (ika < 56 && ika > 0) {
			cout << "Olet neito kauneimmillaan!";
		} else if (ika > 55 && ika < 101) {
			cout << "Olet nuori ikäiseksesi!";
		} else {
			cout << "Ohjelmassa tapahtunut virhe!";
		}
	}
		
	return 0;
}
