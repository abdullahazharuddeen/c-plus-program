#include <iostream>
#include <vector>

using namespace std;

vector <string> type1,name1,name2,surname2,sub1,surname1;
vector <int> age1,age2,salary1;

class Person
{

protected:
    string surname,name,sub;
    int age,salary;

public:
    string type;


    void getname(string Name)
    {
        name=Name;
    }
    string returnName()
    {
        return name;
    }
    void getsurname(string SurName)
    {
       surname=SurName;
    }
    string returnsurName()
    {
        return surname;
    }
    void getSub(string Subject)
    {
        sub=Subject;
    }
    string returnsub()
    {
        return sub;
    }
    void getage(int Age)
    {
        age =Age;
    }
    int returnAge()
    {
        return age;
    }
    void getsalary(int Salary)
    {
        salary=Salary;
    }
    int returnsalary()
    {
        return salary;
    }


    void DisplayTeacher()
    {
        if(type=="Teacher")
        {
            cout << name << " " << surname << " " << age << " " << sub << " "<< salary << " " << endl;
        }
    }

    void DisplayMathTecher()
    {
        if(sub=="Math")
        {
                        cout << name << " " << surname << " " << age << " " << sub << " "<< salary << " " << endl;
        }
    }
};

int main()
{
    string Type,Name,Surname,Sub;
    int Age,Salary,i=0,c=0;

    while(cin >> Type)
    {
        type1.push_back(Type);

        if(Type=="Person")
        {
            cin >> Name >> Surname >> Age;

            name1.push_back(Name);surname1.push_back(Surname);age1.push_back(Age);
        }
        else
        {
            cin >> Name >> Surname >> Age >> Sub >> Salary;
       name2.push_back(Name);surname2.push_back(Surname);age2.push_back(Age);sub1.push_back(Sub);salary1.push_back(Salary);

       if(Sub=="Physics")
       {
           c++;
       }
        }

        i++;
    }

    Person *d=new Person[i];

    int k=0,k1=0;

    for(int j=0;j<i;j++)
    {
        d[j].type=type1[j];
        if(type1[j]=="Person")
        {
            d[j].getname(name1[k]);
            d[j].getsurname(surname1[k]);
            d[j].getage(age1[k]);
            k++;
        }
        else
        {
            d[j].getname(name2[k1]);
            d[j].getsurname(surname2[k1]);
            d[j].getage(age2[k1]);
            d[j].getsalary(salary1[k1]);
            d[j].getSub(sub1[k1]);
            k1++;
        }
    }




    for(int j=0;j<i;j++)
    {
        d[j].DisplayTeacher();
    }
     cout << k1 << endl;
    for(int j=0;j<i;j++)
    {
        d[j].DisplayMathTecher();
    }
    cout<< c;
}
