#include <iostream>
#include <string>

using namespace std;

struct student{

    string name,surname;
    char letter;
    int clas;
    string date;
};

bool operator > (const student &a, const student &b) {
    bool res = false;
    if (a.Class > b.Class) res = true;
    else if (a.Class == b.Class) {
        if (a.letter > b.letter) res = true;
        else if (a.letter == b.letter) {
            if (a.surname > b.surname) res = true;
        }
    }
    return res;
};
int main()
{
    int n,i,j;

    cin >> n;

    student *a=new student[n];

    for(i=0;i<n;i++)
    {
        cin >> a[i].surname >> a[i].name >>a[i].clas >> a[i].letter >> a[i].date;
    }

    for(i=2;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout << a[i].clas << a[i].letter << " " << a[i].surname << " " << a[i].name  <<" " <<  a[i].date << endl;
    }
}
