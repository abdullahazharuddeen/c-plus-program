#include <iostream>
#include <vector>
using namespace std;

vector <long long> v;

int main()
{
    int n,m,i,j;
    cin >> n;

    m=(n*2)-2;
    n=(n*2)-1;

    string x[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || j==m)
            {
                x[i][j]='*';
            }
            else
            {
                x[i][j]=' ';
            }
        }
        m--;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout << x[i][j];
        }
        cout << endl;
    }
}
