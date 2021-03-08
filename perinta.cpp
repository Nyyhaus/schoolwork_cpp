#include <iostream>
#include <string>
using namespace std;

class Ajoneuvo
{
  public:
  int paino;
  int huippu_nopeus;
  long ajetut_kilometrit;
  Ajoneuvo(int paino, int huippu_nopeus, long ajetut_kilometrit);
  void Aja(int ajettava_matka);
  int AnnaPaino();
  int AnnaHuippunopeus();
  long AnnaAjetutKilometrit();
};

Ajoneuvo::Ajoneuvo(int Ap, int Ahn, long Akm)
{
  paino = Ap;
  huippu_nopeus = Ahn;
  ajetut_kilometrit = Akm;
}

void Ajoneuvo::Aja(int ajettava_matka)
{
  ajetut_kilometrit += ajettava_matka;
}

int Ajoneuvo::AnnaPaino()
{
  return paino;
}

int Ajoneuvo::AnnaHuippunopeus()
{
  return huippu_nopeus;
}

long Ajoneuvo::AnnaAjetutKilometrit()
{
  return ajetut_kilometrit;
}

class Auto : public Ajoneuvo
{
public:
Auto(int paino, int nopeus, long kilometrit, string merkki, string malli,
string rekkari, bool kaynnissa);
void katsasta();
void kaynnista();
void sammuta();

string merkki_, malli_, rekisteri_nro_;
bool kaynnissa_;
};

Auto::Auto(int paino, int nopeus, long kilometrit, string merkki, string malli,
string rekkari, bool kaynnissa) : Ajoneuvo(paino, nopeus, kilometrit),
merkki_(merkki), malli_(malli), rekisteri_nro_(rekkari), kaynnissa_(kaynnissa)
{
}
// - kaynnista(), muuttaa kaynnissa-muuttujan arvoksi 1
void Auto::kaynnista() { kaynnissa_ = 1; }	
// - sammuta(), muuttaa kaynnissa-muuttujan arvoksi 0
void Auto::sammuta() { kaynnissa_ = 0; }
// - katsasta(), tulostaa auton tiedot esimerkkitulosteen mukaisesti
void Auto::katsasta()
{
	cout << "Auton tiedot:" << endl <<
"Merkki:" << merkki_ << "\nMalli:" << malli_ << "\nAjokilometrit:" <<
		AnnaAjetutKilometrit() << "\nPaino:" << AnnaPaino() << "\nHuippunopeus:"
		<< AnnaHuippunopeus() << "\nRekisterinumero:" << rekisteri_nro_ << endl;
	if (kaynnissa_ == 1)
		cout << "Auto on käynnissä." << endl;
	else
		cout << "Auto ei ole käynnissä." << endl;
}

int main()
{
  int paino, nopeus;
  long km;
  string merkki, malli, rekkari;

  // kysellään tietoja autosta
  cout << "Anna auton merkki: ";
  cin >> merkki;

  cout << "Anna auton malli: ";
  cin >> malli; 

  cout << "Anna auton rekisterinumero: ";
  cin >> rekkari;
  
  cout << "Anna auton paino: ";
  cin >> paino; 

  cout << "Anna auton huippunopeus: ";
  cin >> nopeus; 
  
  cout << "Anna autolla ajetut kilometrit: ";
  cin >> km; 
  cout << endl;
  Auto autoX(paino, nopeus, km, merkki, malli, rekkari, 0);

  autoX.katsasta();
  autoX.kaynnista();
  autoX.Aja(95);
  cout << endl;
  autoX.katsasta();
}
