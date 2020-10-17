
#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	int ciotka = 0;
	cout << "Wprowadź wynik: ";
	cin >> ciotka;
	
	if (ciotka<0 || ciotka>60) {
		cout << "Błędne dane!";
		return 1;
	}
	if (ciotka<20)
	cout << "Podstawowa";
	else if (ciotka<=40) cout << "Średniozaawansowana";
	else cout << "Essa dab";
	
	return 0;
}

