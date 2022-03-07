#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n,i;


    std::cin >> n;
    i=0;
    while(i<n)
    {
        i++;
        if(i%8==0)
        {
            cout << i << " ";
        }

        else if(i%4==0 && i%3==0)
        {
            cout << i << " ";
        }
    }



}
