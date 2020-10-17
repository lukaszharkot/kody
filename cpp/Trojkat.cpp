
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	
	int bok1;
	int bok2;
	int bok3;
	
	bok1=0;
	bok2=0;
	bok3=0;
	cout << "Wprowadź pierwszy bok: ";
	cin >> bok1;
	cout << "Wprowadź drugi bok: ";
	cin >> bok2;
	cout << "Wprowadź trzeci bok: ";
	cin >> bok3;
	if ((bok1+bok2>bok3) && (bok2+bok3>bok1) && (bok3+bok1>bok2))
	cout << "Trójkąt da się zbudować. ";
	else 
	cout << "Trojkąta nie da się zbudować. ";
	if ((bok1=2137) && (bok2=2137) && (bok3=2137))
	cout << "A swoją drogą to legia to jebana kurwa, legia jebana jest";
	return 0;
}

