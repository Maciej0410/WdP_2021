#include <iostream>
#include <cstring>

using namespace std;

int czyOK1(char haslo[]);
int main()
{


    char moje_haslo[9];
    cout<<"Podaj haslo  (8 cyfr) - > "<<endl;
    cin.getline(moje_haslo, 9);
    cout<<"\n";

    if(czyOK1(moje_haslo)==1)
        cout<<"Haslo jest ok!"<<endl;
    else
        cout<<"Haslo nie jest ok!"<<endl;


    return 0;
}

int czyOK1(char haslo[])
{
    int i=0;
    while(haslo[i]!='\0')
    {
        if(haslo[i]==haslo[i+1])
            return 0;
        i++;
    }

    if(i!=8)
        return 0;

    return 1;
}
