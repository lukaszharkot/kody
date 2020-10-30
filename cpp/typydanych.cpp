#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	short unsigned int a=0;
	int b=0;
	long int c=0;
	//liczby calkowite
	cout<< a << " " << sizeof(a) << endl;
	cout<< b << " " << sizeof(b) << endl;
	cout<< c << " " << sizeof(c) << endl;
	
	char z='a';
	cout<< z << " " << (int)z <<" "<< sizeof(z) << endl;
	
	float d=0;
	double e=0;
	//liczby rzeczywiste
	cout<<  d << " " << sizeof(d) << endl;
	cout<<  e << " " << sizeof(e) << endl;
	
	cout<< "uzycie tablic: " <<endl;
	//typy zlozone
    int ile=5;
    int tab[ile];
	for (int i=0; i<ile; i++){
	    cout<< "podaj " << i+1 << " liczbę: ";
	    cin >> tab[i];
	    
	}
	
	
	cout<< "zawartosc tablicy: " <<endl;
	for (int i=0; i<ile; i++){
	    cout<< "Indeks " << i<< "Wartosc : "<< tab[i]<<endl;
	}
	return 0;
}

 
