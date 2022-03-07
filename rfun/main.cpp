#include <iostream>

using namespace std;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
 int w(int a ,int b)
{

    return (a/gcd(a,b))*b;


}

int main()
{
int a,b;

cin >> a >> b;

cout << w(a,b);


}
