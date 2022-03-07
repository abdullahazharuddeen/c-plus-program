#include <iostream>
#include <vector>
using namespace std;

vector <int> v;

struct book{

    int book_id;
    char title[50];
    char author[50];
    char subject[50];

    int num;

};

void  fun2(const book &a) {

    if (a.book_id == a.num)
    {
        v.push_back(1);
    }
    else
    {
        v.push_back(0);
    }


}




int main()
{
    int n,i,m,j;

    cin >> n;
    book *a=new book[n];



    for(i=0;i<n;i++){
        cin >> a[i].book_id >> a[i].title >> a[i].author >> a[i].subject;
    }





    cin >> m;

    for(i=0;i<m;i++)
    {
        cin >> a[i].num;
    }

    for(i=0;i<m;i++){

    if(v[i]==1)
    {
         cout << a[i].book_id << " " << a[i].title <<" " << a[i].author << " "<< a[i].subject << endl;
    }
    else
    {
        cout << "NO Sorry" << endl;
    }



    }
}
