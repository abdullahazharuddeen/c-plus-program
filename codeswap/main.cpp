#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char x[5],y[5];

    gets(x);
    strcpy(y,x);

    sort(x,x+3,less<char>());
    sort(y,y+3,greater <char>());

    if(x[0]=='0' && x[1]!='0')
    {
        swap(x[0],x[1]);
    }
    if(x[0]=='0' && x[1]=='0')
    {
        swap(x[0],x[2]);
    }

    int a,b;

    a=100*(x[0]-'0')+10*(x[1]-'0')+x[2]-'0';
    b=100*(y[0]-'0')+10*(y[1]-'0')+y[2]-'0';

    cout << a+b;

}
