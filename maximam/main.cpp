#include <iostream>

using namespace std;

int main()
{

    int n,m;

    cin >> n;
    int x[n];

    for(int i=0;i<n;i++)
    {
        cin >>m;
        x[i]=m;
        if(x[i]==x[i])
        {
            int temp=x[i+1]*x[i];
            x[i]=temp;
        }
    }

      for(int i=0;i<n;i++)
    {

        cout << x[i] << " ";
    }
}
