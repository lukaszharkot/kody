

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	
	int iloczyn, i, a;
	iloczyn = 1;
	
	for (i = 0; i < 10; i++) {
		cout << "Podaj liczbę: ";
		cin >> a;
		iloczyn = iloczyn * a;
	
	}
	
	cout << iloczyn;12
	
	return 0;
}
