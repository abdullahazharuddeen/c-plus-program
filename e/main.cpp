
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int n,m;
    char c;
    cin >> n >> m;
    int i;

    for(i=0;s[i]!='\0'; i++) {
            if(i==n-1)
            {
                c=s[i+1];
                cout << c;
            }
             else if(i==m-1)
            {
                c=s[i-1];
                cout << c;
            }
            else
                cout << s[i];

    }

    return 0;

}
