#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <long long> v;
vector <long long> v2;
vector <long long> v3;

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


/*
for(i=0;i<v2.size();i++)
{
    cout << v2[i] << " ";
}*/

int q=v2.size();
if(v2.size()>0)
{
  for(i=q;i>=0;i++)
{
    bool num2=true;
    for(j=q;j>=0;j++)
    {
        if(v2[i]==v2[j])
        {
            num2=false;
        }

    }
    if(num2==true)
        {
            v3.push_back(v2[i]);
        }
}

for(i=0;i<v3.size();i++)
{
    cout << v3[i] << " ";
}
}
else
    cout << "NO";


}



