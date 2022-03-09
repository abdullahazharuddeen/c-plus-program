#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,m,i=1,j=1,k=0,l,sum,p;
    cin >>n >> m;

   while(i<=n)
   {
        j*=10;
        i++;
   }
   k=j/10;



   while(k<=j)
   {
        p=k;
        sum =0;
       while(p>0)
       {
            l=p%10;
           sum+=l;
           p/=10;

       }

       if(sum==m)
       {
           cout << k << endl;
       }

       k++;
   }




}
