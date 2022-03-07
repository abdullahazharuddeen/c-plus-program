#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,i=0;

    while(cin >> n)
    {
        i++;
        sum=sum+n;
    }

    cout << sum << i;
}



