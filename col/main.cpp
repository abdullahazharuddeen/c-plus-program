#include <iostream>
#include <iomanip>

using namespace std;


class Marks
{
    public:
        int EngMark;
        int MathMark;
        int ProgMark;

    Marks(int aEngmark,int aMathMark,int aProgMark)
    {
        EngMark=aEngmark;
        MathMark = aMathMark;
        ProgMark = aProgMark;
    }

    double Average()
    {
        return (EngMark+MathMark+ProgMark)/3;
    }

    int Total()
    {
        return EngMark+MathMark+ProgMark;
    }



};



int main()
{
    int n,m,k;
    cin >> n >> m >> k;


    Marks Student1(n,m,k);


    cout << fixed << setprecision(3);
    cout << Student1.Average() << " " << Student1.Total();
}
