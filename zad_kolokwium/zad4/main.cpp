#include <iostream>
#include <ctime>
using namespace std;

int ile_parzystych(int rozmiar ,int tab[])
{
    int ile=0;
    for(int i=0;i<rozmiar;i++)
    {
        if(tab[i]%2==0&&tab[i]<10)
            ile++;
    }
    return ile;
}

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
    int rozmiar=15;
    int tablica[rozmiar];
    for(int i=0;i<rozmiar;i++)
    {
        tablica[i]=rand()%21;
    }
    wyswietl(rozmiar, tablica);
    cout<<"\n";
    cout<<"Liczb parzystych w tablicy -> "<<ile_parzystych(rozmiar, tablica)<<endl;
    return 0;
}
