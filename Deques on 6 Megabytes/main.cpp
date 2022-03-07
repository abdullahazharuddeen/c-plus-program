#include <iostream>
#include <deque>
#include <climits>
#include <vector>

using namespace std;
    deque <long > myQ[150001];
    vector <long > v;
int main()
{

int n;
cin >> n;

    string str;
     int A;

     for(int i=0;i<n;i++)
     {
         cin >> str >> A;
         if(str=="pushfront")
        {
            long long B;
            cin >> B;
            myQ[A].push_front(B);
        }
        else if(str=="pushback")
        {
            long long B;
            cin >> B;
            myQ[A].push_back(B);
        }
        else if(str=="popfront")
        {
            if(myQ[A].size()>0)
            {
                 long B=myQ[A].front();
                myQ[A].pop_front();
                v.push_back(B);

            }
        }
        else if(str=="popback")
        {
            if(myQ[A].size()>0)
            {
                long B=myQ[A].back();
                v.push_back(B);
                myQ[A].pop_back();


            }
        }
     }


     for(int i=0;i<v.size();i++)
     {
         cout << v[i] << endl;
     }


}
