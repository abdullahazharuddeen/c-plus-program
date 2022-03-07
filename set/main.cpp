#include <iostream>
#include <set>
#include <functional>

using namespace std;



int main()
{
    string str;

    getline(cin,str);

    int i,n,j,m,k,a,size1;

    size1=str.size()-1;

    for(i=size1;i>=0;i--)
    {
        a=str[i]-48;
        if(str[size1]<='8')
        {
            str[size1]+=1;
        }
        else
        {
            str[size1]='0';
            str[size1-1]='1';
        }

    }

    for(i=0;i<size1+1;i++)
    {
        cout << str[i];
    }
}

//19999
