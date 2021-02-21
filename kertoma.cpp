#include<iostream>
using namespace std;

int main()
{
    int luku, i, tulos = 1;
	
	cout << "Anna kokonaisluku:";
	cin >> luku;
  
	for (i = 1; i <= luku; i++) {
		tulos *= i; 
	}
	cout << "Luvun " << luku << " kertoma on " << tulos << endl;
	return 0;
}
