#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long long i,a,b,c,min=ULLONG_MAX,max=-LLONG_MIN,fanswer;

    cin >> a >> b >> c;

    int x[3];
    x[0]=a;
    x[1]=b;
    x[2]=c;
    for(i=0;i<=2;i++)
    {
        //cout << x[i] << " ";
        if(x[i]<=min)
        {
            min=x[i];
        }
        if(x[i]>=max)
        {
            max=x[i];
        }
    }

    bool num=false;
    for(i=0;i<=2;i++)
    {
        if(x[i]>min && x[i]<max)
        {

            fanswer=i+1;
            num=true;
        }

    }

    if(num==true)
    {
        cout<< fanswer;
    }
    else
    {
        cout << 0;
    }

}
