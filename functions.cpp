int suurin(int eka, int toka, int kolmas) {
	if (eka > toka && eka > kolmas)
		return eka;
	else if (toka > eka && toka > kolmas)
		return toka;
	else
		return kolmas;
}
int pienin(int eka, int toka, int kolmas) {
	if (eka < toka && eka < kolmas)
		return eka;
	else if (toka < eka && toka < kolmas)
		return toka;
	else
		return kolmas;
}
