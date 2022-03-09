#include <iostream>
using namespace std;
struct stack {      //создаем структуру
    long long s[100];
    int cursor=0;   //указатель
    void push(long long n){  //задаем функцию для каждой из команд: push n, pop, back, size, clear
        s[cursor++]=n;
    }
    long long pop(){
        return s[--cursor];
    }
    long long back(){
        return s[cursor-1];
    }
    unsigned size(){
        return cursor;
    }
    void clear(){
        cursor=0;
        s[cursor]=0;
    }
};
int main() {
    stack x;
    string b;    //задаем строку
    long long n;
    while(cin>>b){   //читаем ее
        if(b=="push"){    //выполняем команды, которые встречаем в строке
            cin>>n;
            x.push(n);
            cout<<"ok"<<endl;
        }
        else if(b=="pop"){
            if(x.size()==0){
                cout<<"error"<<endl;
            }
            else
                cout<<x.pop()<<endl;
        }
        else if(b=="back"){
                if(x.size()==0){
                cout<<"error"<<endl;
            }
            else cout<<x.back()<<endl;
        }
        else if(b=="size"){
        cout<<x.size()<<endl;
        }
        else if(b=="clear"){
            x.clear();
            cout<<"ok"<<endl;
        }
        else if(b=="exit"){
            cout<<"bye"<<endl;
            break;
        }
    }
    return 0;
}
