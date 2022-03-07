#include <iostream>

using namespace std;



int main()
{
long long a,b,i;

cin >>a;

for(i=1;true;i++)
{
    if(i==a)
    {
        i++;
    }
    if(i%a==0)
    {
        cout << i ;
        break;
    }
}

}
