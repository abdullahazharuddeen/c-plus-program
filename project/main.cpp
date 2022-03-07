#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    long long n,i,m,o,j,g,c;

    cin >> n;
string str5[n];
    long long x[n];

    char str[20],str2[20];
 bool num=false;
    for(i=0;i<n;i++)
    {
        c=0;
        cin >> str >> str2;

        m=strlen(str);
        o=strlen(str2);





        if(o!=m)
        {
            num=false;
        }
        else
        {
            for(j=0;j<m;j++)
            {
                for(g=j+1;g<m;g++)
                {
                    if(str[j]>str[g])
                    {
                        swap(str[j],str[g]);
                    }
                    if(str2[j]>str2[g])
                    {
                        swap(str2[j],str2[g]);
                    }
                }



            }

            for(int z=0;z<m;z++)
            {
                if(str2[z]==str[z])
                   {
                      c++;
                   }

            }
            if(c==m)
            {
                num=true;
                x[i]=true;
            }


        }
    }




    for(i=0;i<n;i++)
    {
        if(x[i]==true)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl;
        }

    }





}

//abcdefghi
//cbafedihg
