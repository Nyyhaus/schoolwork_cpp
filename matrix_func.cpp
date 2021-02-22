void tulosta_matriisi(int matriisi[5][5]) {
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			if (x == 4) 
				cout << matriisi[y][x] << " \n";
			else
				cout << matriisi[y][x] << " ";
		}
	}
}

int laske_summa(int matriisi[5][5]) {
	int summa = 0;
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			summa += matriisi[y][x];
		}
	}
	return summa;
}
