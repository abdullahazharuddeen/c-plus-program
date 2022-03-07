#include <iostream>
#include <cmath>

using namespace std;

int main() {
 int n,m=0;

 cin >> n;
 while(n>9)
 {
    m++;
    n/=n;
 }
 cout << n;


    return 0;
}
