#include <iostream>


using namespace std;

int main()
{
  string str,str1;

  getline(cin,str);

  int a=str.size()-1,j=0;

  for(int i=a;i>=0;i--)
  {
      str1[j]=str[i];
      j++;


  }
    if(str1==str)
    {
        cout << "1";
    }
    else
    {
        cout << 0;
    }



}
