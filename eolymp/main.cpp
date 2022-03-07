#include <iostream>
using namespace std;
 int main ()
  {

         string s;
          getline (cin, s);
           for (int i = 0; s[i]!='\0'; i ++)
                {if (i == 0) cout << s [i];
           else if (s [i] == s [i-1])
                continue;
           else cout << s [i];
            }
             return 0;

}
