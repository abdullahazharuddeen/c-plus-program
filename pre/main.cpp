#include <iostream>

using namespace std;

int main()
{
    int i,n,m=1,j,l,p=1,q,r=0,c1=0;

    cin >> n >> l;

    long long x[n][l];
    long long y[n][l];

    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<l;j++)
        {
            x[i][j]=m;
            m++;
        }
    }

    for(i=n-1;i>=0;i--)
    {
        m=p;
        q=m+(n-1)-r;

        for(j=0;j<l;j++)
        {

            y[i][j]=m;
            m+=q;

        }
        p++;
        r++;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            if(y[i][j]==x[i][j])
            {
                c1++;
            }
        }
    }
    cout << c1;


/*
    cout << endl;




    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            cout << y[i][j] <<" ";
        }
        cout << endl;
    }

    cout << endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
                cout << x[i][j] << " ";

        }
        cout << endl;
    }*/


}
