#include <iostream>

using namespace std;

int main()
{
    int n,i,j,m,sum=0;

    std::cin >> n;
    int x[n][n];

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin >> m;
            sum+=m;
        }

    }

    for(i=1;i<=n;i++)
        {
            cout << sum <<endl;
        }

    }

