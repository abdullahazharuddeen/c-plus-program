#include <iostream>

using namespace std;

int main()
{
    long n,m,i,j,n2,n3;

    cin >> n >> m;
    string str,str2;
    if(n>0)
    {
        while(n>0)
        {
            char a;
            j=n%2;
            a=j+48;
            //a=a%2;
            //cout << a;
            str+=a;
            n/=2;
        }

        n2=str.size();
        n3=m-n2;

        while(n3>=0)
        {
            str+='0';
            n3--;
        }

        for(i=str.size()-1;i>=0;i--)
        {
            str2+=str[i];
        }
        cout << str2;
    }
    else
    {
           n = 256 + n;
    string result = "";


    while(n > 0)
        {
        result = string(1, (char)(n%2 + 48)) + result;
        n = n/2;
    }

    n2=result.size();
    n3=m-n2;

    //cout << n3;


    for(i=n2-1;i>0;i--)
    {
        str+=result[i];
    }

    while(n3>0)
    {
        str+='0';
        n3--;
    }
    str+='1';


    //result[n3-1]='1';

   for(i=str.size()-1;i>=0;i--)
   {
       str2+=str[i];
   }
   cout << str2;
    }
}
