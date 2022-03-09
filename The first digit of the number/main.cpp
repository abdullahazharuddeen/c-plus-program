#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n<0)
        n=-n;
    while(n>9)
    {
        n/=10;

    }
    printf("%lld",n);
    return 0;
}

