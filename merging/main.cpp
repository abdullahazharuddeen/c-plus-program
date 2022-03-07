#include <iostream>
#include <vector>

using namespace std;

vector <string> s;

class Shape
{
private:
    string shapes;

public:

   void getshape(string Shapes)
    {
        shapes=Shapes;
    }
    string toshape()
    {
        return shapes;
    }



};

int main()
{
    int i=0;
    string str;

    while(cin >> str)
    {
        s.push_back(str);
        i++;
    }
    Shape *d=new Shape[i];
    for(int j=0;j<i;j++)
    {
        d[j].getshape(s[j]);
    }

    for(int j=0;j<i;j++)
    {
        cout << d[j].toshape() << endl;
    }
}
