#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    long long n,m,i,j,k;

    cin >> m >> n;

    int x[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> x[i][j];
        }
    }



        for(i=0;i<n;i++)
    {
        k=0;

        for(j=0;j<n;j++)
        {
            if(x[i][j]==m)
            {
                k++;
            }
        }



        if(k>0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }


}
