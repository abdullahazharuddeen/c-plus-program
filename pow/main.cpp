#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,n,i,m,sum,sum1,sum2;
    cin >> n;
    int x[n][3];
    for(i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> a >> b >> c;
        m=pow(a,b);
        sum=pow(m,c);
        sum1=pow(10,9)+7;
        sum2=sum%sum1;
        x[i][j]=sum2;
        }


    }
    for(i=0;i<3;i++)
    {
        cout << x[i] << endl;
    }



}
