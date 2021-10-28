#include <iostream>

using namespace std;

int main()
{
    char operacja;
    float liczba_1, liczba_2, wynik;

    cout << "Ktora operacje chcesz wykonac? -> + | - | / | * " << endl;
    cin>>operacja;
    cout << "Podaj liczbe1 -> " << endl;
    cin>>liczba_1;
    cout << "Podaj liczbe2 ->  " << endl;
    cin>>liczba_2;

    if(operacja=='+')
        wynik=liczba_1+liczba_2;
    else if(operacja=='-')
        wynik=liczba_1-liczba_2;
    else if(operacja='*')
        wynik=liczba_1*liczba_2;
    else if(operacja=='/')
        wynik=liczba_1/liczba_2;
    else
        cout<<"Podany operator jest nieprawid³owy"<<endl;

    cout<<"Wynik dzialania -> "<<wynik<<endl;


    return 0;
}
