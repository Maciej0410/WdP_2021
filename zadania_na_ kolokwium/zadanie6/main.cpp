#include <iostream>

using namespace std;

int ile_Spacji(char napis[]);

int main()
{
    char napis[]="Ala ma kota czy kota ma ktos inny";
    cout<<"Liczba spacji w zdaniu -> "<<ile_Spacji(napis)<<endl;

    return 0;
}

int ile_Spacji(char napis[])
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
    return wynik;
}
