#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <long long> v;
int main()
{
    string str,str2;

    getline(cin,str);

    long long i,j,a,max=100,c=0,q;
    for(i=0;str[i]!='\0';i++)
    {
        a=str[i]-48;
        if(a<max)
        {
            max=a;
        }
    }
    //m=str.size()-1;

    for(i=0;str[i]!='\0';i++)
    {
        a=str[i]-48;
        if(a==max)
        {
           c=i;
        }
    }
    j=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(i!=c)
        {
           str2[j]=str[i];
            j++;
        }
    }

    long long num1=stoi(str2);
    cout << num1;

}
