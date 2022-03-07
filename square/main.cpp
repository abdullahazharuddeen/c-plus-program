#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >>b >> c >> d;

    if(a>b && a>c && a>d && b>c && b>d)
    {
        m=b;
    }
    else if(a>b && a>c && a>d && c>b && c>d)
    {
        m=c;
    }
    else if(b>a && b>c && b>d && a>b && a>d)
    {
        m=a;
    }
    else if(b>a && b>c && b>d && c>b && a>d)
    {
        m=a;
    }
}
