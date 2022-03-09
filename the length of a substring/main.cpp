#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int n,m,i,j=0;
    cin >>n >> m;
    for(i=0;str[i]!='\0';i++)
    {
        if(i>=n-1 && i<m)
        {
            j++;
        }
    }
    cout << j << endl;
    for(i=0;str[i]!='\0';i++)
    {
        if(i>=n-1 && i<m)
        {
            cout << str[i];
        }
    }


}
