#include <iostream>

using namespace std;

int main()
{
    long long n,i=1,sum=1,sum2,j,msum,sum3,q=0;

    cin >> n;


    sum2=100;
    sum3=100;

    sum=999;


    while(sum3<=sum)
    {

        j=sum3;
        msum=0;
        while(j>0)
        {
            msum+=j%10;
            j/=10;
        }
        if(msum==n)
        {
            q++;
        }
        sum3++;
    }
    cout << q << endl;

    while(sum2<=sum)
    {

        j=sum2;
        msum=0;
        while(j>0)
        {
            msum+=j%10;
            j/=10;
        }
        if(msum==n)
        {
            cout << sum2 << endl;
        }
        sum2++;
    }



}
