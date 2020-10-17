#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int iloscliczb;
    cout <<"Podaj ilosc liczb: ";
    cin >>iloscliczb;


    int tablica[iloscliczb];
    float suma = 0;
    for (int i = 0; i < iloscliczb; ++i)
    {
        cout <<"Podaj liczbe: " ;
        cin >>tablica[i];

        suma += tablica[i];
    }
    cout <<"Srednia wynosi: "<<(suma / iloscliczb)<<endl;

	return 0;
}