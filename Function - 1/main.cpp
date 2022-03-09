#include <iostream>
#include <math.h>

using namespace std;

double sum(double n)
{

    double sum1=0;
    sum1=(n*n*n)+2*(n*n)-3;
    return sum1;
}

int main()
{
    double n,k;

    while(cin >> n)
    {
        k=sum(n);
        printf("%0.4lf\n",k);
    }
}
