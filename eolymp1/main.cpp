#include <iostream>

using namespace std;

int main()
{
    int n,i,x[100],min1=100,max1=-100,m=0;
    cin >> n;

    for(i=0;i<n;i++)
    {
       cin >> x[i];
       if(x[i]<min1)
       {
           min1=x[i];
       }
       if(x[i]>max1)
       {
           max1=x[i];
       }
    }
for(i=0;i<n;i++)
{
    if(x[i]<max1 && x[i]>min1)
        m+=x[i];
}
cout << m;

}
