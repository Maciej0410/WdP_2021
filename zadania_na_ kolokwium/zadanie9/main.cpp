#include <iostream>

using namespace std;

int SumaMaxMin(int tab[], int rozmiar);

int main()
{
    int rozmiar = 8;
    int tablica[rozmiar]={20,5,7,8,9,3,25,10,21};

    cout<<"Suma elementu max i elemntu min -> "<<SumaMaxMin(tablica, rozmiar)<<endl;

    return 0;
}

int SumaMaxMin(int tab[], int rozmiar)
{
    int suma=0;
    int minimum=tab[0], maksimum=tab[0];
    for(int i=1;i<=rozmiar;i++)
    {
        if(minimum>tab[i])
            minimum=tab[i];
    }

    for(int i=1;i<=rozmiar;i++)
    {
        if(maksimum<tab[i])
            maksimum=tab[i];
    }

    suma=minimum+maksimum;

    return suma;
}
