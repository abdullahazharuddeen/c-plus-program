#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


vector <long long > v;
vector <long long > v2;
vector <long long > v3;
vector <long long > v4;

int main()
{
    long long n,m,i,j;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> m;

        v.push_back(m);
    }

    for(i=0;i<n;i++)
    {

        bool num=true;

        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                j++;
            }
            if(v[i]==v[j])
            {
                num=false;
            }
        }

        if(num==false)
        {
            v2.push_back(v[i]);
        }
    }


    if(v2.size()>0)
    {
            for(i=v2.size()-1;i>=0;i--)
    {
        v3.push_back(v2[i]);

    }

    for(i=0;i<v3.size();i++)
    {
        bool num2=true;

        for(j=i+1;j<v3.size();j++)
        {
            if(v3[i]==v3[j])
            {
                num2=false;
            }
        }
        if(num2==true)
        {
            v4.push_back(v3[i]);
        }
    }

    for(i=v4.size()-1;i>=0;i--)
    {
        cout << v4[i] << " ";
    }
    }
    else
        cout << "NO";

}
