#include <iostream>

using namespace std;

long long fun(long long n)
{
    long long sum=1,m;
    if(n>0)
    {

         fun(n/10);
         if(n%2==0)
         {
             m=n%10;
             sum=sum*m;
             return sum;
         }

    }
    else
        return 0;
}


int main()
{
    long long n;
    cin >> n;
  cout << fun(n);
}
