#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,a,b,sum,p=0;

    cin >> n >> m;

    int x[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin >> x[i][j];
        }
    }

    cin >>a >> b;

    int y[a][b];

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin >> y[i][j];
        }
    }
    int arr[n][a];

for(i=0;i<a;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==p && j==p)
        {


        cout << y[i][j]<< " " << x[i][j];
        }


    }
    cout << endl;
    p++;

}

}
