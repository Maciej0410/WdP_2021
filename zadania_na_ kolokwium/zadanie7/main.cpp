#include <iostream>

using namespace std;

int zamiana(char napis[]);
void zamiana_napisu(char napis[]);

int main()
{
    char napis[]="Ala ma kota czy kota ma ktos inny";
    cout<<"Napis przed zamiana -> "<<napis<<endl;
    cout<<zamiana(napis)<<endl;

    return 0;
}

int zamiana(char napis[])
{
    char znak=' ';
    int i=0;
    int wynik=0;
    while(napis[i]!='\0')
    {
        if(napis[i]==znak)
            wynik++;
        i++;
    }

   zamiana_napisu(napis);
   return wynik;

}
void zamiana_napisu(char napis[])
{
    char znak=' ';
    char znak_zmn='_';
    int i=0;
    int wynik=0;
    while(napis[i]!='\0')
    {
        if(napis[i]==znak)
        {
            napis[i]=znak_zmn;
            wynik++;
        }
        i++;
    }

    cout<<"Napis po zamianie -> "<<napis<<endl;
    cout<<"Znaki wstawione -> ";
}
