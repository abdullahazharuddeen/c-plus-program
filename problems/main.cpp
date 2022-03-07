#include <iostream>

using namespace std;

int main()
{
    long long i,j,n,sum=0,sum2=0;

    cin >> n;

    long long x[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> x[i][j];
            if(i==j)
            {
                sum+=x[i][j];
            }
            if(j==n-i-1)
            {
                sum2+=x[i][j];
            }
        }
    }


    cout << sum << " " << sum2;

}
