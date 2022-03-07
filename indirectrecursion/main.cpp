#include <iostream>

using namespace std;

void funB(int n);


void funA(int n)//22,10,4,1
{
    if(n>0)//22,10,4,1
    {
        cout << n;//22,10,4,1
        funB(n-1);//22-1,10-1=9,4/2=2,0
    }
}



void funB(int n)
{
    if(n>1)//21,9,2,0
    {
        cout << n;//21,9,2
        funA(n/2);//21/2=10,9/2=4,2/2=1,
    }
}


//2221109431
int main()
{
    int n;
    cin >> n;//22
    funA(n);
}
