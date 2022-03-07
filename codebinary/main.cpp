#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <long long> v;

vector <long long> r;

int main()
{
    int n,i,m,j,sum;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> m;
        v.push_back(m);
    }

for(i=0;i<n;i++)
    {
        if(i>0)
        {
            sum=v[i]-v[i-1];
            if(sum>137)
            {
                i+=2;
            }
        }
        r.push_back(v[i]);
    }

    sort(r.begin(),r.end());


    for(i=0;i<r.size();i++)
    {
        cout << r[i]  << " ";
    }





}
