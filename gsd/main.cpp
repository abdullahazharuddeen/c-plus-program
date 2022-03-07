#include <iostream>

using namespace std;

int main()
{
    long long n,m,i,j,sum=1;

    cin >> n;

    for(i=1;i<n;i++)
    {
        bool num=true;
        for(j=2;j<n;j++)
        {
            if(j%i==0)
            {
                num =false;
            }
        }
        if(num=true)
        {
            cout << i;
        }
        if(i*i>n)
        {
            break;
        }
    }
}
