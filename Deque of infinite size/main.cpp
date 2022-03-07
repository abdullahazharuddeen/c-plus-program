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
            if(MyQ.size()>0)
            {
                n=MyQ.front();
            string S1=to_string(n);
            V.push_back(S1);
            MyQ.pop_front();
            }
            else
            {
                V.push_back("error");
            }

        }
        else if(str=="pop_back")
        {

            if(MyQ.size()>0)
            {
                n=MyQ.back();
            string S1=to_string(n);
            V.push_back(S1);
            MyQ.pop_back();
            }
            else
            {
                V.push_back("error");
            }


        }
        else if(str=="front")
        {
            if(MyQ.size()>0)
            {
                n=MyQ.front();
            string S1=to_string(n);
            V.push_back(S1);
            }
            else
            {
                V.push_back("error");
            }

        }
        else if(str=="back")
        {
            if(MyQ.size()>0)
            {
                n=MyQ.back();
            string S1=to_string(n);
            V.push_back(S1);
            }
            else
            {
                V.push_back("error");
            }

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
