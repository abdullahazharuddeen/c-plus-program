#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

vector <string> s;

vector <string>s2;

int main()
{
    int n,i,j;

    scanf("%d\n",&n);
    string str,str2;

    for(i=0;i<n;i++)
    {
            getline(cin,str);


        sort(str.begin(),str.end());
        s.push_back(str);


    }

    for(i=0;i<n;i++)
    {
        cout << s[i] << endl;
    }
}
