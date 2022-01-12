#include <iostream>

using namespace std;

int czyPoprawnyNRRej(char numer[]);

int main()
{
    char nr_rejestracyjny[]={'W','O',' ','5','5','6','9','1'};

    char nr_rejestracyjny_2[]={'W','o',' ','5','5','6','9','1'};

    cout<<"Poprawnosc numeru rejestracyjnego -> " <<czyPoprawnyNRRej(nr_rejestracyjny)<<endl;
    cout<<"Poprawnosc numeru rejestracyjnego 2 -> " <<czyPoprawnyNRRej(nr_rejestracyjny_2)<<endl;
    return 0;
}


int czyPoprawnyNRRej(char numer[])
{
    int iterat=0;

    while(numer[iterat]!='\0')iterat++;

    int licznik_litery=0;
    int licznik_liczby=0;

    for(int j=0; j<iterat; j++)
    {
        if(numer[j]>='A' && numer[j]<='Z')
            licznik_litery++;
    }
    for(int j=0; j<iterat; j++)
    {
        if(numer[j]>='0' && numer[j]<='9')
            licznik_liczby++;
    }

    if(licznik_litery!=2)
        return 0;

    if(licznik_liczby!=5)
        return 0;

    if(iterat==7)
        return 0;

    if(numer[2]!=' ')
        return 0;

    return 1;
}
