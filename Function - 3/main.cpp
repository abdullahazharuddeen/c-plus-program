#include <iostream>
#include <cmath>

using namespace std;

double sum(double a, double b)
{
double sum1=0;
    sum1=a*a+sin(a*b)-b*b;
    return sum1;
}

int main()
{
    double a,b,r;
    while(cin >> a >> b)
    {
        r=sum(a,b);

        printf("%.4lf\n",r);
    }

    return 0;
}
