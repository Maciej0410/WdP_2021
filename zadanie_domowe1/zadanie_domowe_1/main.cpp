#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe calkowita: " << endl;
    cin>>liczba;

    if(liczba%2==0)
        cout<<"Liczba jest parzysta"<<endl;
    else
        cout<<"Liczba nie jest parzysta"<<endl;

    return 0;
}
