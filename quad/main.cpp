#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
cin >> n;
    if(n==1)
    {
        cout << "January" << endl;
        cout << "February" << endl;
        cout << "March";
    }
    else if(n==2)
    {
        cout << "April" << endl;
        cout << "May" << endl;
        cout << "June" << endl;
    }
    else if(n==3)
    {
        cout << "July" << endl;
        cout << "August" << endl;
        cout << "September" << endl;
    }
    else if(n==4)
    {
        cout << "October" << endl;
        cout << "November" << endl;
        cout << "December" << endl;
    }

}
