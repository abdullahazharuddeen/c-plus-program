#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int n,m,i,j,num,num2,c;

    getline(cin,str);

    cin >> n >> m;
    c=n;

    num=str.size()-1;

    num2=m-n;

    cout << m-n+2 << endl;

    for(i=0;i<(m-n);i++)
    {
        for(j=n-1;j<c;j++)
        {
             cout << str[j];
        }

        c++;


        cout << endl;

    }



}
