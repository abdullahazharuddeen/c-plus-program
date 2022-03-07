#include <iostream>

using namespace std;

int main()
{
    long long a,b,n,i,c,j;

    cin >>  a >> b;

if(a<=0)
{
    a=1;
}

    for(i=a;i<=b;i++)
    {    bool num=true;
        for(j=2;j<=b;j++)
        {
            if(j==i)
            {
                j++;
            }
            if(i%j==0 || i==1)
            {
                num=false;

            }
        }

        if(num==true)
        {
            bool num2=true;
            for(int q=2;q<=b;q++)
            {
                if(q==)
                if(i%q==0)
                {
                    num2=false;
                }
            }

           if(num2==true)
           {
               cout << i << " ";
           }
        }
        }
    }

