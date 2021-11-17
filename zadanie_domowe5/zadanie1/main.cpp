#include <iostream>
#include <ctime>

using namespace std;

bool liczba_pierwsza(int n)
{
	if(n<2)
		return false;
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}

int main()
{
    srand(time(NULL));

    for(int i=1;i<200;i++)
    {
        int tmp=(rand()%201)+1;
        if(liczba_pierwsza(tmp))
            cout<<"Liczba pierwsza -> "<<tmp<<endl;
    }
    return 0;
}
