#include <iostream>

using namespace std;

int sum(int n, int m)
{
    int j=0;

    if(m>n)
    {
        j=m-n;
    }
    else if(m=n)
    {
        j=n;
    }
    else
    {
        j=n-m;
    }

    return j;
}

int main()
{
    int n,m;
    cin >> n >> m;
    int result =sum(n,m);

    cout <<  sum ;
}
}
