#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <long long> v;

vector <long long> r;

vector <long long > x;
int main()
{
    long long  n,m,j,k,c,max=-1,i,max2,max3,max4;

    cin >> n >> m;


    for(i=0;i<m;i++)
    {
        cin >> k;
        v.push_back(k);

    }

    sort(v.begin(),v.end());



    for(i=0;i<n;i++)
    {
        c=0;

        for(j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
            max2=v[i];
        }
        i+=c;
    }

    m=-1;

    for(i=0;i<n;i++)
    {
        c=0;

        for(j=i+1;j<n;j++)
        {
            if(v[i]==v[j] &&v[i]!=max2)
            {
                c++;
            }
        }

        if(c>max)
        {
            max=c;
            max3=v[i];
        }
        i+=c;
    }





    cout << max2  << " " <<  max3<< " " << max4;
}
