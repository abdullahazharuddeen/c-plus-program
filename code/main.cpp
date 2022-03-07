#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str,str2;



    getline(cin,str);
    str2=str;

    sort(str.begin(),str.end());
    sort(str2.begin(),str2.end(),greater <char>());

    cout << str << endl << str2;
}
