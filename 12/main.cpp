#include <iostream>
#include <cmath>

using namespace std;

int fun(int n)
{


    if(n==1)
        return 1;

    return fun(n-1)*n;


}


int main()
{
    int n;
    cin >> n;
    fun(n);
    cout << fun(n);

    return 0;
}
