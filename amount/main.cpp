#include <iostream>
#include <cstring>
#include <vector>

using namespace std;


vector <string> v;
int main()
{
   string str,str2,str3[10000];

   getline(cin,str);
   getline(cin,str2);

   int a=str.size()-1,num1,num2,l,i,j,r=0;
   int b=str2.size()-1;

   if(a>=b)
   {j=b;
       for(i=a;i>=0;i--)
       {

           num1=str[i]-48;
           if(j>=0)
           {
               num2=str2[j]-48;

           }
           else
           {
               num2=0;
           }

           //cout << num1 << " " << num2 << " ";

           if(num1*num2>=10 && i>0)
           {

               l=(num1*num2)/10;
               int l2=(num1*num2)%10;
               str[i-1]+=l;

               string q=to_string(l2);

                //cout << l << " ";
               v.push_back(q);
           }
           else
           {
               l=num1*num2;
               string p=to_string(l);
               v.push_back(p);

           }

           j--;

       }
       for(i=v.size()-1;i>=0;i--)
   {
       cout << v[i];
   }
   }

   else
   {

   j=a;
    for(i=b;i>=0;i--)
       {

           num2=str2[i]-48;
           if(j>=0)
           {
               num1=str[j]-48;

           }
           else
           {
               num1=0;
           }

           //cout << num1 << " " << num2 << " ";

           if(num1*num2>=10 && i>0)
           {

               l=(num1*num2)/10;
               int l2=(num1*num2)%10;
               str2[i-1]+=l;

               string q=to_string(l2);

                //cout << l << " ";
               v.push_back(q);
           }
           else
           {
               l=num1*num2;
               string p=to_string(l);
               v.push_back(p);

           }

           j--;

       }
       for(i=v.size()-1;i>=0;i--)
   {
       cout << v[i];
   }
   }


}
