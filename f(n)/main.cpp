#include <iostream>

using namespace std;

int main()
{
    long long n,m,i,j,sum=0;

    cin >> n;

    long long x[n];

    //x[0]=1;
    x[1]=1;
    sum+=x[1];

    for(i=2;i<n;i++)
    {
        x[i]=x[i-1]+x[i-2];
        sum+=x[i];
    }
    cout << sum%123456789;
}
