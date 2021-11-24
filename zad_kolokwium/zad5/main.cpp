#include <iostream>
#include <ctime>
using namespace std;

void wyswietl(int rozmiar, int tab[])
{
    cout<<"[";
    for(int i=0;i<rozmiar;i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<"]";
}

int main()
{
    srand(time(NULL));
    int rozmiar=10;
    int tablica[rozmiar];

    for(int i=0;i<rozmiar;i++)
    {
        tablica[i]=(rand()%31)-20;
    }

    wyswietl(rozmiar, tablica);
    int liczba;
    cout<<"\nPodaj liczbe -> ";
    cin>>liczba;

    for(int i=0;i<rozmiar;i++)
    {
        tablica[i]+=liczba;
    }

    wyswietl(rozmiar, tablica);

    return 0;
}
