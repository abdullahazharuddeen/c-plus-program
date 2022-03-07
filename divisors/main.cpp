#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <long> v,v2;

int main()
{
    long n,m,i,sum=0,sum2;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> m;

        v.push_back(m);
    }

    for(i=0;i<n;i++)
    {
        cin >> m;
        v2.push_back(m);
    }

    sort(v.begin(),v.end(),greater <int>());
    sort(v2.begin(),v2.end());

    for(i=0;i<n;i++)
    {
        sum2=v[i]*v2[i];
        sum+=sum2;
    }
    cout << sum;
}
