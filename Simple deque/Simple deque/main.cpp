#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    deque <int> MyQ;
    vector <string> V;
    string str;

    while(cin >> str)
    {
        int n;
        if(str=="push_front")
        {
            cin >> n;
            MyQ.push_front(n);
            V.push_back("ok");

        }
        else if(str=="push_back")
        {
            cin >> n;
            MyQ.push_back(n);
            V.push_back("ok");
        }
        else if(str=="pop_front")
        {
            n=MyQ.front();
            string S1=to_string(n);
            V.push_back(S1);
            MyQ.pop_front();
        }
        else if(str=="pop_back")
        {
            n=MyQ.back();
            string S1=to_string(n);
            V.push_back(S1);
            MyQ.pop_back();

        }
        else if(str=="front")
        {
            n=MyQ.front();
            string S1=to_string(n);
            V.push_back(S1);
        }
        else if(str=="back")
        {
            n=MyQ.back();
            string S1=to_string(n);
            V.push_back(S1);
        }
        else if(str=="size")
        {
            n=MyQ.size();
            string S1=to_string(n);
            V.push_back(S1);

        }
        else if(str=="clear")
        {
            MyQ.clear();
              V.push_back("ok");

        }
        else
        {
            V.push_back("bye");
            break;
        }

    }

    for(int i=0;i<V.size();i++)
    {
        cout << V[i] << endl;
    }
}
