#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int n,m,i;
    cin >> n >> m;
    int c=n;

    cout << m-n+2<< endl;
    for(i=n;i<m;i++)
    {
        for(int j=c;j<m;j++)
        {
            cout << str[j];

        }
        cout << endl;
        c++;

    }
}
