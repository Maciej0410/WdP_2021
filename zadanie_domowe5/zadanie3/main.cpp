#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int tmp=rand()%101;
    int tmp_2=rand()%101;
    int wynik=tmp*tmp;
    int licznik=0, zgadywana;

    do{
       cout<<"Zgadnij wynik -> "<<endl;
       cin>>zgadywana;
       licznik++;
        if(zgadywana==wynik)
            cout<<"Koniec gry! WYGRALES!"<<endl;
        else
            cout<<"Sprobuj ponownie"<<endl;
    }while(licznik!=3);

    return 0;
}
