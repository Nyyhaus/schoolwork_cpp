#include <iostream>
using namespace std;

int main() {
	int luku1, luku2, summa, erotus, tulo, jakoj;
	
	cout << "Syötä ensimmäinen kokonaisluku:";
	cin >> luku1;
	
	cout << "Syötä toinen kokonaisluku:";
	cin >> luku2;
	
	summa = luku1 + luku2;
	erotus = luku1 - luku2;
	tulo = luku1 * luku2;
	jakoj = luku1 % luku2;
	
	cout << luku1 << "+" << luku2 << " = " << summa << endl <<
luku1 << "-" << luku2 << " = " << erotus << endl <<
luku1 << "*" << luku2 << " = " << tulo << endl <<
"Jakojäännös: " << jakoj << endl;
}
