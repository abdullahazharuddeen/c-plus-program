#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
 int main(){
      long n,i,j,m,k,l;
      cin>>n>>l;
      int a[n];
       for(i=0; i<n; ++i)
        { cin>>a[i];
       } sort(a,a+n);
       if(l>n)
        { cout<<-1; } else{


    cout<<a[n-l];}
}
