#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    long long n,m,i,j,b;

    cin >> n;


    for(i=0;i<=n*2;i++)
    {
        for(j=0;j<=n*2;j++)
        {
            if(i==n || j==n)
            {
                cout << '*';
            }
            else
                cout << '.';
        }
        cout << endl;
    }
}
