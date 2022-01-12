#include <iostream>

using namespace std;

void zamiana2(int tab[], int rozmiar);
void wyswietl (int tab[], int rozmiar);

int main()
{
    int rozmiar=7;
    int tablica[rozmiar]={1,3,14,15,6,9,17,18};
    wyswietl(tablica, rozmiar);
    cout<<"\n";
    zamiana2(tablica, rozmiar);
    return 0;
}

void zamiana2(int tab[], int rozmiar)
{
    for(int i=0;i<rozmiar; i++)
    {
        if(tab[i]%2==0)
            tab[i]=0;
        else
            tab[i]=1;
    }

    cout<<"Po zamianie -> "<<endl;
    wyswietl(tab, rozmiar);
}

void wyswietl(int tab[], int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        cout<<"["<<tab[i]<<"]";
    }
}
