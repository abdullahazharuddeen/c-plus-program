#include <iostream>
#include <ctime>


using namespace std;

int main()
{
    long long n,i;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cout << (rand()%6)+1 << " ";
    }
}


