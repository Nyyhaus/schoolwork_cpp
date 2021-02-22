#include <iostream>
using namespace std;

class Laskin
{
  public:

  int Summa(int eka, int toka);
};

int Laskin::Summa(int eka, int toka)
{
  int summa = eka + toka;
  return summa;
}

class Tulostaja {
	public:
	void Tulosta();
};

void Tulostaja::Tulosta() {
	int x, y, z;
	cout << "Syötä ensimmäinen kokonaisluku:";
	cin >> x;
	
	cout << "Syötä toinen kokonaisluku:";
	cin >> y;
	
	Laskin juttu;
	z = juttu.Summa(x, y);
	
	cout << "Lukujen summa: " << z;
}


int main()
{  
  Tulostaja olio;
  olio.Tulosta();
}
