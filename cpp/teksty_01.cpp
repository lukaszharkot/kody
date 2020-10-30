#include <iostream>
using namespace std;

void pobierz1(char t[]){
    cin >> t;
}

void pobierz2(char t[], int r){
    cin.getline(t,r);
}
    
void drukuj1(char t[], int r){
    for (int i=0; i<r; i++){
        cout << i << " " << t[i]<< " " << (int)t[i] << endl;
    }
    cout << endl;
}

void drukuj2(char t[]){
    int i=0;
    while (t[i]!= '\0'){
        cout << i << " " << t[i] << " " << (int)t[i] << endl;
        i++;
    }
}

int zlicz_znaki(char t[]){
    int i=0;
    while (t[i]!= '\0'){
        i++;
    }
    return i; //zwrócenie rozmiaru tekstu
}

int main(int argc, char **argv)
{
	char znak = 'a';
	cout << (int)znak << endl;//znak na kod
	
	int kod=65;
	cout << (char)kod << endl;//kod na znak
	
	int rozmiar=10;
	char znaki[rozmiar]; //deklaracja tabeli znakowej
	
	//pobierz1(znaki);
	pobierz2(znaki,rozmiar); // lepiej uzywac z getline
    drukuj1(znaki, rozmiar); // nie wiemy czy wszystkie znaki sa od uzytkownika
	drukuj2(znaki);          // pewnosc ze odczytamy znaki poprawnie
	cout << "Wprowadzono " << zlicz_znaki(znaki) << " znaków!";
	
	return 0;
}

// !=rozny od
