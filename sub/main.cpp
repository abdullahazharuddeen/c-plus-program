#include <iostream>

using namespace std;

int main()
{
    int n,i,j,m2;


    cin >> n;
    m2=n-1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1 || i==j || j==m2)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        m2--;
        cout << endl;
    }
}
