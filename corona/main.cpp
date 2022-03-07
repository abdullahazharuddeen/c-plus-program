#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector <string> v;

vector <string> v2;



int main()
{
    int n,m,i,j,a,b;


    cin >> n;
    string str[n],str2[n],str3,str4;
    for(i=0;i<n;i++)
    {
       cin >> str3 >> str4;

       a=str3.size();

       for(int p=0;p<a;p++)
       {
           for(j=p+1;i<a;j++)
           {
               if(str3[p]>str3[j])
               {
                   swap(str3[p],str3[j]);
               }
           }

           str[i]=str3[i];
       }



    }

cout << str[0];

}

