#include <iostream>
#include <set>

using namespace std;

int main()
{

    set <pair<int,int>>S;

    int n,i,j,a,b;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        S.insert({a,b});
    }

    for(i=0;i<n;i++)
    {
        cout << S[i] << " ";
    }
}
