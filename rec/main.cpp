#include <iostream>
#include <cmath>


int main()
{
    int n,i,k=0,count1=0;
     string str;

     getline(cin,str);
     for(i=0;str[i]!='\0';i++)
     {
         if(str[i]=='f' || str[i]=='F')
         {
             k++;
         }
     }
     if(k==1)
     {
         for(i=0;str[i]!='\0';i++)
         {
             if(str[i]=='f' || str[i]=='F')
             {
                 count1++;
                 break;
             }
         }
         cout << count1;
     }
     int m=str.size()-1;
     else if(k>1)
     {
         for(i=m;i>=0;i--)
         {
             if(str[i]=='f' || str[i]=='F')
             {
                 break;
             }
         }

         cout << coun1 << " " << i;
     }
     else
        cout << "nothing";

}
