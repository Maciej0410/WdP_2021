#include <iostream>

using namespace std;

int main()
{

    double kwota;
    cout << "Podaj ilosc pieniedzy: " << endl;
    cin>>kwota;

    double tmp=0.17;
    double tmp2=0.3;
    double wynik;

    if(kwota<=60000)
        wynik=kwota-(kwota*tmp);
    else
        wynik=kwota-(kwota*tmp2);

    cout<<"Kwota po odliczeniu podatku -> "<<wynik<<endl;

    return 0;
}
