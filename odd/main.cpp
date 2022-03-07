/*
#include <iostream>

using namespace std;

int main()
{
     long long m,n,i=1,j=0,sum=1,sum1,m2;



    cin >> n >>m2 >> m ;

    while(i<=n)
    {
        sum*=10;
        i++;
    }
    sum1=sum/10;
    sum=sum-1;

if(m%2!=0)
{
    m=m-1;
}

if(m2<sum1)
{
    m2=sum1;
}

    if(m<sum1)
    {
        m=sum1;
    }
    if(m>sum)
    {
        m=sum;
    }



     j=m-sum1;


   //  cout << sum << " " << j << " " << m <<endl;
if(j%2!=0)
{
    cout << j/2+1;
}
else
    cout << j/2;


}*/

#include <iostream>

using namespace std;

int main()
{
     long long n,m,i=1,j,n2,m2,sum=1,sum2,msum,msum2;

     cin >> n >> m >> m2;



     while(i<=n)
     {
         sum*=10;
         i++;
     }

     sum2=sum/10;

     sum-=1;
       if(m<sum2)
    {
        m=sum2;
    }

    if(m2>sum)
    {
        m2=sum;
    }
     //cout << sum2 << " " << sum;

     if(m2>m)
     {

     if(m2%2==0)
     {
         m2=m2-1;
     }

    msum=sum-m2;
    msum2=sum-msum-m;


        cout << (msum2/2)+1;
     }
     else
     {
         cout << 0;
     }
}

