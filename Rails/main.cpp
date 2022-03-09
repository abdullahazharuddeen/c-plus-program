
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>

using namespace std;

int main(){
    int n;
    int number;
    stringstream stream_my;
    while( (cin >> n, getchar(), n != 0) ){
        string s;
        getline(cin, s, '\n');
        while(s != "0"){
            vector<int> stalemate;
            stream_my.str("");
            stream_my.clear();
            stream_my << s;
            stream_my >> number;
            for( int i=1 ; i<=n ; i++ ){
                stalemate.push_back(i);
                while(!stalemate.empty() && number == stalemate.back()){
                    stalemate.pop_back();
                    stream_my >> number;
                }
            }
            cout << (stalemate.empty()? "Yes" : "No") << endl;
            getline(cin, s, '\n');
        }
        cout << endl;
    }

}
