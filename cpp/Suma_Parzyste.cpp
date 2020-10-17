
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int Essa, Dab;
	
	int start, koniec;
	start = koniec = 0;
	
	
	cout << "Podaj liczbę początkową: ";
	cin >> start;
	
	cout << "Podaj liczbę końcową: ";
	cin >> koniec;
	
	Essa = 0;
	for (Dab = start; Dab < koniec+1; Dab++){
		if(Dab % 2 == 0)
			Essa = Essa + Dab;
	
	}
	cout << Essa;
	return 0;
}

