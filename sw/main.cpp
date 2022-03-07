#include <iostream>

using namespace std;

int main()
{
    long long n,i=1,j=1,p,l=0;
    cin >> n;

    while(i<=n)
    {
        j*=10;
        i++;
    }

   p=j/10;
   j=j-1;

   if(n>0)
   {
       for(i=p;i<=j;i++)
    {
        if(i%2==0)
        {
            l++;
        }
    }
    cout << l;
   }
   else
    cout << 0;
}
