#include <iostream>
#include <vector>



using namespace std;
vector <string> s;
vector <int> num1;
vector <int> num2;
vector <int> num3;


class shapes
{
public:
    string Shapes1;
private:
    int a;
    int b;

public:


        void getnum(int A)
        {
            a=A;
        }
        int renum()
        {
            return a;
        }

        void getnum2(int B)
        {
            b=B;
        }
        int renum2()
        {
            return b;
        }

        void Display()
        {
            if(Shapes1=="Square")
            {
                cout << a*a << " " << a*4 << endl;
            }
            else
            {
                cout << a*b << " " << a+a+b+b << endl;
            }
        }




};



int main()
{
    string str;
    int a,b,i=0,j;


    while(cin >> str)
    {
        s.push_back(str);
        if(str=="Square")
        {

            cin >> a;
            num1.push_back(a);
        }
        else
        {
            cin >> a>> b;
            num2.push_back(a);
            num3.push_back(b);

        }
        i++;
    }

    shapes *d=new shapes[i];

    int k=0,k1=0;
    for(j=0;j<i;j++)
    {
        d[j].Shapes1=s[j];

        if(s[j]=="Square")
        {
        d[j].getnum(num1[k]);
            k++;
        }
        else
        {
            d[j].getnum(num2[k1]);
            d[j].getnum2(num3[k1]);
        k1++;
        }
    }

   // d[2].Display();

   for(j=0;j<i;j++)
   {
       d[j].Display();
   }



}
