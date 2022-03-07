#include <iostream>
#include <stack>



using namespace std;


int InfixToPostfix(string infix)
{ stack <int> stack;
    string postfix;

    for(int i=0;i<infix.length();i++)
    {
        if(infix[i]>='0' && infix[i]<='9')
        {
            stack.push(infix[i]-'0');

        }
        else{
            int op2=stack.top();
            stack.pop();
            int op1=stack.top();
            stack.pop();

            switch (infix[i])
            {

            case '+':
                stack.push(op1+op2);
                break;
                case '-':
                stack.push(op1-op2);
                break;
                case '*':
                stack.push(op1*op2);
                break;




            }

        }

   }


    return stack.top();
}
int main()
{
    string infix_exp,str2;

    getline(cin,infix_exp);

    for(int i=0;i<infix_exp.length();i++)
    {
        if(infix_exp[i]!=' ')
        {
            //cout << infix_exp[i];
            str2+=infix_exp[i];
        }
    }

   //cout << str2 << endl;

    cout << InfixToPostfix(str2)
;


}
