#include <iostream>

#include <cmath>

using namespace std;



int main()
{
    long long n,m,i,j;

    cin >> n;

    string str,str2;
    char a;
    str=to_string(n);

    for(i=0;str[i]!='\0';i++)
    {
        m=str[i]-48;

        for(j=0;j<=m;j++)
        {
            a=m+48;

            str2+=a;
        }
    }
    cout << str2;


}

