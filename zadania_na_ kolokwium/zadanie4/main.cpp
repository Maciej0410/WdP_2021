#include <iostream>
#include <cstring>

using namespace std;

void zamiana(char napis[], int ile)
{
    int dlugosc=0;
    while(napis[dlugosc]!='\0')
        dlugosc++;

    int zaczynam=dlugosc-ile;
    char napis_2[]={};

    int j=0;
    int iterat=0;
    while(napis[j]!='\0')
    {
        j++;
        if(j==zaczynam || j>zaczynam)
        {
            for(int p=0;p<ile;p++)
            {
                napis_2[p]=napis[j];
                j++;
            }
        }
    }
    cout<<"Napis po zamianie -> "<<napis_2<<endl;
}

int main()
{
  char napis[]="kowalski";
  cout<<"Napis -> "<<napis<<endl;
  zamiana(napis, 3);
  zamiana(napis, 5);
    return 0;
}

