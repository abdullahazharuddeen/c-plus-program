#include <iostream>
#include <vector>
using namespace std;

vector <long>v;


int main()
{
     long n,m,i,j,a,b,sum;

    cin >> n;
    long x[n];
    for(i=0;i<n;i++)
    {
        cin >> x[i];
    }

    cin >> m;
    for(i=0;i<m;i++)
    {
        sum=0;
        cin >> a >> b;

        for(j=a-1;j<=b-1;j++)
        {
           sum+=x[j];
        }
        v.push_back(sum);

    }


    for(i=0;i<m;i++)
    {
        cout << v[i] << endl;
    }
}
