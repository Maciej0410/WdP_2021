#include <iostream>

using namespace std;

int suma(int tab[], int rozmiar, int liczba);

int main()
{
    int rozmiar = 8;
    int tablica[]={2,5,7,8,9,3,2,10,21};
    int liczba;
    cout<<"Podaj liczbe -> "<<endl;
    cin>>liczba;

    if(suma(tablica, rozmiar, liczba))
        cout<<"Suma -> "<<suma(tablica, rozmiar, liczba)<<" jest wieksza od -> "<<liczba<<endl;
    else
        cout<<"Suma jest mniejsza od wprowadzonej liczby "<<endl;
    return 0;
}

int suma(int tab[], int rozmiar, int liczba)
{
    int suma=0;
    for(int i=0;i<rozmiar;i++)
    {
        suma+=tab[i];
    }

    if(suma>liczba)
        return suma;
    else
        return 0;
}
