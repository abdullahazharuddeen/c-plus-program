#include <iostream>
#include <vector>


using namespace std;

vector <string> s;
vector <int> v;

class Employee
{
    public:
    string name;
    int amount;
};

bool operator > (const Employee &a,const Employee &b)
{
    bool res=false;
    if(a.name >b.name)
    {
        res=true;
    }
    return res;
}
int main()
{
    int n,i=0;

    string str;

    while(cin >> str >> n)
    {

        s.push_back(str);
        v.push_back(n);
        i++;
    }

    Employee *d=new Employee[i];

    for(int j=0;j<i;j++)
    {
        d[j].name=s[j];
        d[j].amount=v[j];
    }

    for(int j=2;j<=i;j++)
    {
        for(int k=0;k<=i-j;k++)
        {
           if(d[k]>d[k+1])
           {
               swap(d[k],d[k+1]);
           }
        }
    }

    for(int j=0;j<i;j++)
    {
        bool num=false;
        for(int k=j+1;k<i;k++)
        {
            if(d[j].name==d[k].name)
            {
                //cout << 1;
                 num=true;
            }
        }

        if(num==false)
        {
            cout << d[j].name << " " << d[j].amount << endl;
        }

    }

}
