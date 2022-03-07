#include <iostream>

using namespace std;

class Result{

public:
    virtual void ChecktheResult()=0;
};

class Student:Result{
    private:


    public:
    string Name;
    string University;
    int Age;
    int Marks;


    void ChecktheResult()
    {
        if(Marks>=90 && Age>=19)
        {
            cout << Name << " You Got Scholarchip"<< endl;
        }
        else if(Marks>=90 &&Age<19 )
        {
            cout << Name << " Passed keep it!"<< endl;
        }
        else
        {
            cout << Name << " Improve your makrks you have the skill all the best next time"<< endl;
        }
    }
};



int main()
{
    int n,i;
cin >> n;

    Student *p = new Student[n];
    for(i=0;i<n;i++)
    {
        cin >> p[i].Name >> p[i].University >> p[i].Age >> p[i].Marks;
    }

    for(i=0;i<n;i++)
    {
        p[i].ChecktheResult();
    }

    //student1.Display();
}

