#include <iostream>

using namespace std;

int main()
{
    long long n,i,m;



    string str,str2,str3;

    cin >> str >> str2;
n=str.size();
m=str2.size();

if(n>m)
{
    cout << '>';
}
else if(n<m)
{
    cout << '<';
}
else
{
    i=0;
    while(i<n && str.at(i)==str2.at(i))
    {
        i++;
    }
    if(i==n)
    {
        cout << '=';
    }
    else if(str.at(i)<str2.at(i))
    {
        cout << '<';
    }
    else
    {
        cout << '>';
    }
}
}
