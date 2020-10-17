

#include <iostream>

using namespace std;

int main(int argc, char **argv)

{
	int bok; 
	int pole;
	bok = 0; 
	pole = 0;
	cout << "Podaj bok kwadratu: ";
	cin >> bok;
	pole = bok * bok;
	cout << "Pole: " << pole;
	
	return 0;
}

