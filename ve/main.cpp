#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> v;
int main()
{

    long n,i,m,j;

    cin >> n;

    for(i=0;i<n-1;i++)
    {
        cin >> m;
        v.push_back(m);
    }

    for(i=1;i<=n-1;i++)
    {
        bool num =true;
        for(j=0;j<n;j++)
        {
            if(v[j]!=i)
            {
                cout << j+1;
                break;
                num=false;
            }
        }
        if(num==false)
        {
            break;
        }


    }
}
