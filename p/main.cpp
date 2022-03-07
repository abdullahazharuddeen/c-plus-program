#include <iostream>

using namespace std;


int main()
{
int n,i,j,m,sum=0;

cin >> n >> m;

int x[n][m];


for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        cin >> x[i][j];


    }
}
for(i=1;i<=n;i++)
{
    for()
    if(i%2!=0 && x[i][j]>0)
        {
            sum+=x[i][j];
        }
}
cout << sum;

}

