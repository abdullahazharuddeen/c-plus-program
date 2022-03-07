#include <iostream>
#include <string>
#include <cmath>


using namespace std;



int main()
{
    int a,b,i,n,j,sum=0;

    cin >> a >>b;

    if(a<0)
    {
        a=0;
    }
    if(b<0)
    {
        b=0;
    }

    string str,str2;

    for(i=a;i<=b;i++)
    {
      bool isprime=true;

        for(j=2;j<=b;j++)
        {
            if(i==j)
            {
                j++;
            }
            if(i%j==0)
            {
                isprime=false;
            }
        }
        if(isprime==true)
        {

            str=to_string(i);

            n=str.size()-1;
            int q=0;
            for(int p=n;p>=0;p--)
            {
             str2[q]=str[p];
             q++;
            }
            int num1=stoi(str2);


            bool isprime2=true;


            for(int l=2;l<=num1;l++)
            {
            if(num1==l)
            {
                l++;
            }
            if(num1%l==0)
            {
                isprime2=false;
            }
            }
            if(isprime2==true)
            {
                sum++;
            }


        }

    }
    cout << sum;




}

