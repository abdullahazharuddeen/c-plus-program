#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> S,S1;
int main()
{
    string str;

    cin >> str;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            S.push_back(0);
        }
        else if(str[i]==')')
        {
            S.push_back(1);
        }
        else if(str[i]=='{')
            {
                S.push_back(10);
            }
        else if(str[i]=='}')
            {
                S.push_back(11);
            }
        else if(str[i]=='[')
            {
                S.push_back(20);
            }
        else if(str[i]==']')
            {
                S.push_back(21);
            }
    }

    bool num=true;

    while(num)
    {
        num=false;
        S1.clear();

        for(int i=0;i<S.size();i++)
        {
            if(i<S.size()-1 && S[i+1]-S[i]==1)
            {
                num =true;
i++;
            }
            else
            {
                S1.push_back(S[i]);
            }

        }
        swap(S,S1);
    }
    if(S.size()==0)
    {
        cout <<"yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
