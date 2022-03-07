#include <iostream>

using namespace std;

void fun2(int n);

void fun(int n)
{
    if(n>0)
    {
        cout << n;
        fun2(n-1);
    }
}

void fun2(int n)
{
    if(n>1)
    {
        cout << n;
        fun(n/2);
    }
}

int main()
{
    int n;

    cin >> n;

   fun(n);

}
