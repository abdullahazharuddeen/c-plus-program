#include <iostream>

using namespace std;

int main()
{
     long n,i=1,j=0,sum=1,m,l;

    cin >> n >> m;

    while(i<=n)
    {
        sum*=10;
        i++;
    }
l=sum-1;
sum/=10;

//cout << sum<< " " << l;

    while(sum<m)
    {
        j++;
        sum++;
        if(sum>=l)
        {
            break;
        }
    }
   cout << j;
}
