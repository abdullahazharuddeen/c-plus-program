#include <iostream>
#include <queue>
#include <vector>

using namespace std;

queue <int> myQ;
vector<string> v;

int main()
{
    string str;

    while(cin >> str)
    {
        int n;
        if(str=="push")
        {

            cin >> n;
            myQ.push(n);
            v.push_back("ok");

        }
        else if(str=="pop")
        {

        if(myQ.size()>0)
            {
            n=myQ.front();
            string str2=to_string(n);
            v.push_back(str2);
            myQ.pop();
            }
            else
            {
                v.push_back("error");
            }


        }
        else if(str=="front")
        {
            if(myQ.size()>0)
            {
            n=myQ.front();
            string str2=to_string(n);
            v.push_back(str2);
            }
            else
            {
                v.push_back("error");
            }



        }
        else if(str=="size")
        {
           n=myQ.size();
            string str2=to_string(n);
            v.push_back(str2);

        }
        else if(str=="clear")
        {
            while(!myQ.empty())
            {
                myQ.pop();
            }


            v.push_back("ok");
        }
        else
        {
            v.push_back("bye");
            break;
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout << v[i] <<endl;
    }
}
