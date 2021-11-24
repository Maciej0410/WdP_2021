#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe n -> ";
    cin>>liczba;

    for(int i=1;i<=liczba;i++)
    {
        if(liczba%i==0)
        {
            cout<<"dzielnik -> "<<i<<endl;
        }
    }
    return 0;
}
