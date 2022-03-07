#include <iostream>

using namespace std;

int main()
{
    string str;

    int n,i,c=0;

    getline(cin,str);

    n=str.size();
    bool num=true;
    bool num2=true;
    bool num3=true;
    bool num4=true;
    for(i=0;i<n;i++)
    {
        if(str[i]>='A' && str[i]<='Z' && num==true)
        {
            c++;
            num=false;
        }
       else if(str[i]>='a' && str[i]<='z' && num2==true)
        {
            c++;
            num2=false;
        }
        else if(str[i]>='0' && str[i]<='9' && num3==true)
        {
            c++;
            num3=false;
        }
        else if(((str[i]<='/' && str[i]>=' ') || (str[i]>=':' && str[i]<='@')) && num4==true )
        {
            c++;
            num4=false;

        }
    }

    if(n>=8)
    {
        c=c+1;
    }
    cout << c;
}
//:! "# $% & '() * +
