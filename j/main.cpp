#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int i;
    string str;
    getline(cin,str);
    for(i=0;str[i]!='\0';i++)
    {

            if(str[i] <= 'z' && str[i]>='a')
            cout << str[i] << str[i];
            else
                cout << str[i];
    }
}
