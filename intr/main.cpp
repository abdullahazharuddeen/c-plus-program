#include <iostream>

using namespace std;

int main()
{
    long long n,i=1,j=1,m,l=0,k,p,q=0;
    cin >> n;

    while(i<=n)
    {
        j*=10;
        i++;

    }
    m=j/10;


    while(m<j)
    {
        q=0;
        k=m;
        while(k>0)
        {
            p=k%10;

            if(p%2!=0)
            {
                q++;
            }
k/=10;

        }
        if(q==n)
        {
            l++;
        }

        m++;
    }

    cout << l;

}
