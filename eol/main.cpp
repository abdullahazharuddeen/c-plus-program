#include <iostream>
#include <cmath>
using namespace std;

int main()
{

        long long i,n,j,f=1;

        cin >> n;

        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        j=pow(n,2);

        if(f%j==0)
        {
            cout << "YES";
        }
        else
            cout << "NO";

}
