#include <iostream>
#include <string>


using namespace std;


string str;
long n,m,a,i;


int main()
{
    cin >> n;

    if(n<0)
    {
        n=-n;
    }
    while(n>0)
    {
        m=n%2;
        str+=m+48;
        n/=2;
    }



    for(i=str.size()-1;i>=0;i--)
    {
        cout << str[i];
    }
}
