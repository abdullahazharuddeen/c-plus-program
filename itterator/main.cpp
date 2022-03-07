#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

set <int> v;


int main()
{
    int n,m,i;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> m;
        v.insert(m);
    }

    auto it=v.upper_bound(-3);
    cout << *it;

}
