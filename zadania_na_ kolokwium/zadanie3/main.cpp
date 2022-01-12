#include <iostream>

using namespace std;

int dzielniki(int liczba);

int main()
{
    int liczba;
    cout << "Podaj liczbe -> "<<endl;
    cin>>liczba;

    cout<<"Liczba -> "<<liczba<<" ma dzielnikow -> "<<dzielniki(liczba)<<endl;

    return 0;
}

int dzielniki(int liczba)
{
    int wynik=0;
    for(int i=1; i<=liczba; i++)
    {
        if(liczba%i==0)
            wynik++;
    }
    return wynik;
}
