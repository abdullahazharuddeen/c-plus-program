#include <iostream>

using namespace std;

int main()
{
    int a,first,second,third;

    cin >> a;


    first=a/100;
    third=a%10;

       while(a>9)
    {
        second=a%10;
        a/=10;
    }

    cout << third << second << first;
}

