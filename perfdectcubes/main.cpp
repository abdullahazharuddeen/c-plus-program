#include <iostream>
#include <cmath>
using namespace std;


int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n>0)
    {
        return n*factorial(n-1);
    }




}
int main()
{
    int n;
    cin >> n;
    factorial(n);
    cout << factorial(n);

}
