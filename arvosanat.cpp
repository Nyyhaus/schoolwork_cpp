#include<iostream>
using namespace std;

int main()
{
    int arvosana, lkm = 0;
	double keskiarvo, yhteensa = 0;
	
	cout << "Ohjelma laskee koearvosanojen keskiarvon.\n\
Lukujen syöttämisen lopetus negatiivisella luvulla.";
	do {
		cout << "Anna arvosana(4-10)";
		cin >> arvosana;
		
		if (arvosana > 3 && arvosana < 11) {
			lkm++;
			yhteensa += arvosana;
		} else {
			break;
		} 
	} while (lkm > 0);
	
	keskiarvo = yhteensa / lkm;
	
 
	cout << "Ohjelmaan syötetty " << lkm << " arvosanaa.\n\
Arvosanojen keskiarvo: " << keskiarvo << endl;
	return 0;
}
