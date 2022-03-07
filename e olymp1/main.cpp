#include <iostream>
#include <math.h>

using namespace std;

long sum(long x,long y,long z)
{

    long sum1=0;
    sum1=x*y*z+x+(y*y)+(z*z*z);
    return sum1;
}

int main()
{
    long x,y,z,k;

    while(cin >> x >> y >> z )
    {
        k=sum(x,y,z);
        printf("%ld\n",k);
    }
}
