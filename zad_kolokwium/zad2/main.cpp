#include <iostream>

using namespace std;

int main()
{
    int liczba, liczba_2, wynik=0;
    do{
        cout<<"Podaj liczbe nr1 -> ";
        cin>>liczba;
        cout<<"Podaj liczbe nr2 -> ";
        cin>>liczba_2;

        wynik=liczba+liczba_2;

    }while(wynik!=100);
    return 0;
}
