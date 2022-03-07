#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


vector <int> v;


int main()
{

    string str;

    getline(cin,str);

    int a,i;

    for(i=0;str[i]!='\0';i++)
    {
        a=str[i]-48;
        v.push_back(a);

    }

    sort(v.begin(),v.end());

    v.erase(unique(v.begin(),v.end()),v.end());


    cout << v.s;
}
