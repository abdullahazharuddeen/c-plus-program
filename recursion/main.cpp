#include <iostream>

using namespace std;

void sum(int n)
{

    if(n>0)
    {
       cout << n;

       sum(n-1);
       sum(n-1);
    }

}

int main()
{
    int n;

    cin >> n;
    sum(n);
}
//
