#include <iostream>

using namespace std;

double dodawanie(int liczba_1, int liczba_2)
{
    double wynik=0;
    return wynik=liczba_1+liczba_2;
}
double odejmowanie(int liczba_1, int liczba_2)
{
    double wynik=0;
    return wynik=liczba_1-liczba_2;
}
double mnozenie(int liczba_1, int liczba_2)
{
    double wynik=0;
    return wynik=liczba_1*liczba_2;
}
void dzielnie(int liczba_1, int liczba_2)
{
    double wynik;
    if(liczba_2==0)
        cout<<"Niepoprawna liczba, nie dzielimy przez 0!"<<endl;
    else
        wynik=liczba_1/liczba_2;
        cout<<"Wynik dzielenia -> "<<wynik<<endl;
}


int main()
{
    int liczba_1,liczba_2;
    int dzialanie;

    cout << "1-dodawanie(+), 2-odejmowanie(-), 3-mnozenie(*), 4-dzielenie(/)\n" << endl;
    cout<<"Ktora operacje chcesz wykonac? -> ";
    cin>>dzialanie;

    cout<<"Podaj liczbe 1 ->  "<<endl;
    cin>>liczba_1;
    cout<<"Podaj liczbe 2 ->  "<<endl;
    cin>>liczba_2;

    if(dzialanie==1)
        cout<<"Wynik dodawania -> "<<dodawanie(liczba_1,liczba_2);
    else if(dzialanie==2)
        cout<<"Wynik odejmowania -> "<<odejmowanie(liczba_1,liczba_2);
    else if(dzialanie==3)
        cout<<"Wynik mnozenia -> "<<mnozenie(liczba_1,liczba_2);
    else if(dzialanie==4)
        dzielnie(liczba_1,liczba_2);
    else
        cout<<"Niepoprawny operator "<<endl;

    return 0;
}
