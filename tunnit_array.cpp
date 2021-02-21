#include <iostream>
using namespace std;

int main() {
	float yhteensa, keskiarvo;
	int paiva, i;
	float tunnit[30];
	
	
	cout << "Ohjelma laskee yhteen haluamasi ajanjakson aikana tehdyt\n\
työtunnit sekä keskimääräisen työpäivän pituuden.\n\Kuinka monta päivää:\n";
	cin >> paiva;
	
	for (i = 0; i < paiva; i++) {
		cout << "Anna " << i + 1 << ". päivän työtunnit:";
		cin >> tunnit[i];
		yhteensa += tunnit[i];
	}
	
	keskiarvo = yhteensa / paiva;
	
	cout << "Tehdyt tunnit yhteensä: " << yhteensa << "\n\
Keskimääräinen työpäivän pituus: " << keskiarvo << "\n\
Syötetyt tunnit: ";
	for (i = 0; i < paiva; i++) {
		cout << tunnit[i] << " ";
	}
	
	return 0;
}
