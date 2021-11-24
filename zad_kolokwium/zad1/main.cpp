#include <iostream>

using namespace std;

int main()
{
    int licznik=0, liczba;
    do{
        cout<<"podaj liczbe -> "<<endl;
        cin>>liczba;

        if(liczba>=-20&&liczba<=20)
        {
            licznik++;
            cout<<"Podales prawidlowa liczbe!";
        }
        else
            cout<<"Zla liczba";
    }while(licznik!=1);
    return 0;
}
