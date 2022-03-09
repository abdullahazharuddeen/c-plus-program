
#include <iostream>

using namespace std;

int main()
{
    long n,i=1,sum=0;

    cin >> n;

    while(i<=n)
    {
        if(n%i==0 && i%2==0)
        {
            sum++;
        }
        i++;
    }
   cout << sum;



}
