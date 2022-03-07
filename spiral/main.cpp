#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,sum=0;

    cin >> n;

    for(i=0;i<n;i++)
    {

        if(i%2==0)
        {
            cout << i;
            sum+=i;
        }
    }

}

