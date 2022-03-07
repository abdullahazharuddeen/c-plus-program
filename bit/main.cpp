#include <iostream>

using namespace std;


int main ()

{
   long long n,i,j;

   cin >> n;
   long long x[n];

   for(i=0;i<n;i++)
   {
       cin >> x[i];
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(x[i]<=x[j])
           {
               swap(x[i],x[j]);
           }
       }
   }

   for(i=0;i<n;i++)
   {
       cout << x[i] << " ";
   }


}

