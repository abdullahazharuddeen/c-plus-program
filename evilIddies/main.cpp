#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <long long> v;
int main()
{

    long long i,n,m,j,sum=0,s1,s2,l=1,k;
    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> m;
        v.push_back(m);
    }

    sort(v.begin(),v.end());


    for(i=0;i<n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    j=n;
    while(j>=0)
    {
        if(j%3==0)
        {
            break;
        }
        j--;
    }


       for(i=1;i<n;i++)
    {
        if(i<j)
        {
        if(l<=2)
       {
           sum+=v[i];
            cout << v[i] << " ";
       }
       else
       {
           l=0;
           i++;
       }
l++;

        }
        else
        {
           // cout << v[i] << " ";
            sum+=v[i];
        }

    }

    //cout << sum;
}
//7
 // 6 1 5 4 3 5 7




