#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 long long n,p;
 cin >> n;
 p=pow(n,2);
if(n%p==0)
{
    cout << "YES";
}
else
    cout << "NO";

}
