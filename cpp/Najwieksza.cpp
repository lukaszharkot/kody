
#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	int liczba1;
	cout << "Podaj liczbę: ";
	cin >> liczba1;
	
	if (liczba1%2==0)
	cout << "Liczba jest parzysta";
	else
	cout << "Liczba jest nieparzysta";
	return 0;
}

