#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    long a,b,m;
    cin >> a  >> b;
    if(a>0){
        m=b-a;
    }
    else
    {
        m=b+a;
    }
    cout << a/m << " " << b/m;


}
