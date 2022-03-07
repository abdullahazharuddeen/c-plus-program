#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <string> v;
string ai;
int n;

int main()
{
    cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> ai;

            v.push_back(ai);

        }
        for(int i=v.size()-1;i>=0;i--)
        {
            cout << v[i] << " ";
        }
        v.clear();

}
