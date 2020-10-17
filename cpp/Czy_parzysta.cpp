
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a;
	int b;
	int c;
	a=0;
	b=0;
	c=0;
	cout << "Podaj pierwszą liczbę: ";
	cin >> a;
	
	cout << "Podaj drugą liczbę: ";
	cin >> b;
	
	cout << "Podaj trzecią liczbę: ";
	cin >> c;
	
	if ((a>b) && (a>c)) cout << "Najwieksza liczba to a ";
	if ((c>b) && (c>a)) cout << "Najwieksza liczba to c ";
	if ((b>a) && (b>c)) cout << "Najwieksza liczba to b ";
	if ((a=b) && (a=c) && (b=c)) cout << "Wszystkie liczby są takie same";
	return 0;
}

