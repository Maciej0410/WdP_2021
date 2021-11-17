#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int zgaduje;
    int tmp=(rand()%101);
    int licznik=0;
    do{
        cout<<"Zgadnij liczbe -> \n";
        cout<<"\n";
        cin>>zgaduje;
        licznik++;
        cout<<"Liczba prob -> "<<licznik<<endl;

        if(zgaduje<tmp)
            cout<<"Podales liczbe mniejsza\n"<<endl;
        else if(zgaduje>tmp)
            cout<<"Podales liczbe wieksza\n"<<endl;
        else
            cout<<"Prawidlowa liczba BRAWO!"<<endl;


    }while(zgaduje!=tmp);
    cout<<"Pomyslnie zakonczono!"<<endl;
    return 0;
}
