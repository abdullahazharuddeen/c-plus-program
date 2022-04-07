#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <long long> v;
vector <long long> v2;

int main()
{
    long long a,b,c,d,n,i,j;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> a >> b;

        v.push_back(a);
        v2.push_back(b);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(v2[i]<v2[j])
            {
                swap(v2[i],v2[j]);
                swap(v[i],v[j]);
            }
            if(v2[i]==v2[j])
            {
                if(v[i]>v[j])
                {
                    swap(v2[i],v2[j]);
                    swap(v[i],v[j]);
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout << v[i] << " " << v2[i] << endl;
    }

}
