#include <iostream>
#include <vector>

using namespace std;

vector <int> v;

int main()
{
    int n,m,i,j,l,sumAdd=0,c;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> m;
        v.push_back(m);

       // cout << i << " ";
    }

    for(i=0;i<n;i++)
    {
        cin >> m;
        v.push_back(m);

       // cout << i << " ";


    }
    for(i=0;i<v.size();i++)
    {
        //cout << v[i] << " ";
    }

    for(i=0;i<v.size();i++)
    {
        for(j=i+1;j<v.size();j++)
        {

            if(v[i]==v[j])
            {
                cout << v[i] << " " << v[j] << " ";
                c=v[i]*2;
                sumAdd+=c;
            }
        }
    }

   // cout << sumAdd;

}
