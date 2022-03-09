
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char l;
    cin.get(l);
    for(int z=0;z<n;z++){
        bool q=1;
        char hab;
        string str;
        getline(cin,str);
        int j=str.size();
        stack<char> res;
        for(int i=0;i<j;i++){
            if((str[i]=='(')||(str[i]=='['))
                res.push(str[i]);
            else{
                    if(!res.empty()){
                        hab=res.top();
                        if(str[i]==')'){
                            if(hab=='('){
                                res.pop();
                               }
                            else{
                                q=0;
                                cout << "No" << endl;
                                break;

                            }
                        }
                        else{
                            if(hab=='['){
                                res.pop();
                               }
                            else{
                                q=0;
                                cout << "No" << endl;
                                break;
                            }
                        }
                    }
                    else{
                        cout << "No" << endl;
                        q=0;
                        break;
                    }
            }
        }
        if(q){
        if(res.empty())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        }

    }
    return 0;
}
