#include <iostream>
#include <vector>


using namespace std;

//vector <char> c,c2;

int main()
{
    string str,str2;

    getline(cin,str);
    getline(cin,str2);
    int i,j,c=0;
    for(i=0;i<str2.size();i++)
    {
        bool num=true;
        for(j=0;j<str2.size();j++)
        {
            if(str2[i]==str[j])
            {
                num=false;
            }
        }
        if(num==false)
        {
            c++;
        }
    }

    if(c==str2.size())
    {
        cout << "Ok";
    }
    else
    {
        cout << "No";
    }

    //cout << c;
}
