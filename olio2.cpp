class KysyJaTulosta {
	public:
	void TeeHommasi(char merkkijono[]);
};

void KysyJaTulosta::TeeHommasi(char merkkijono[]) {
	char y[50];
	cout << merkkijono;
	cin.get(y, 50);
	cout << y;
}
