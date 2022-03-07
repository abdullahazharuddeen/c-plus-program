#include <iostream>

using namespace std;


int main()
{
    string str;

    getline(cin,str);

    int i,j;

    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]>str[j])
            {
                swap(str[i],str[j]);
            }
        }
    }

    for(i=0;str[i]!='\0';i++)
    {
        cout << str[i];
    }

}



