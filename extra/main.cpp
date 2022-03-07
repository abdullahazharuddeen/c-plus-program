#include <iostream>

using namespace std;

int main()
{
    string str;

    getline(cin,str);
    int i,k=0,m,j;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='f')
           {
               k++;

           }
    }


    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='f')
        {
            m=i;
            break;
        }
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='f' && i>m)
        {
            j=i;
            break;
        }
    }



    if(k>1)
    {
        cout << j;
    }
    else if(k==1)
    {
        cout << -1;
    }
    else if(k<1)
    {
        cout << -2;
    }
}
