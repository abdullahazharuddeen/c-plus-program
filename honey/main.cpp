#include <iostream>
#include <vector>


using namespace std;

vector <char>v;
vector <char>v2;
vector <char>v3;


 int main ()
 {
     string str;

     getline(cin,str);
     int i,n,m,j;

     for(i=str.size()-1;i>=0;i--)
     {
         bool num=true;
         for(j=i-1;j>=0;j--)
         {
             if(str[i]==str[j])
             {
                 num=false;
             }
         }
         if(num==true)
         {
             char c=str[i];
             v.push_back(c);
         }
     }

     for(i=v.size()-1;i>=0;i--)
     {
         cout << v[i];
     }

}
