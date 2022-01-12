#include <iostream>
#include <cstring>

using namespace std;

int czyOK2(char haslo[]);
int main()
{
    char moje_haslo[]={};
    int rozmiar=11;
    cout<<"Podaj haslo  (8-10 cyfr) - > "<<endl;
    cin.getline(moje_haslo, rozmiar);
    cout<<"\n";

    if(czyOK2(moje_haslo))
        cout<<"Haslo jest ok!"<<endl;
    else
        cout<<"Haslo nie jest ok!"<<endl;

    return 0;
}

int czyOK2(char haslo[])
{
    int i=0, j=0;
    while(haslo[i]!='\0')
        i++;

    if(!(i>=8 && i<=10))
        return 0;

    int ostatnia = i;
    int pierwsza = 0;

    int licznik_cyfr=0;
    for(int k=0; k<ostatnia; k++)
    {
        if(haslo[k]>='0'&&haslo[k]<='9')
            licznik_cyfr++;
    }

    if(licznik_cyfr!=0)
        return 0;

    while(haslo[j]!='\0')
    {
        if(haslo[pierwsza]>='A' && haslo[pierwsza]<='Z')
            return 1;
        if(haslo[ostatnia]>='A'&& haslo[ostatnia]<='Z')
            return 1;
        j++;
    }
    return 0;
}
