#include <iostream>
#include <vector>


using namespace std;

struct Book{
    int book_id;
    char title[50];
    char author[50];
    char subject[50];
};

long long n,i,q,j,book_id,m;
Book * book;

vector <int> v;

int main()
{
    cin >> n;

    book=new Book[n];

    for(i=0;i<n;i++)
    {
        scanf("%d\n",&book[i].book_id);
        gets(book[i].title);
        gets(book[i].author);
        gets(book[i].subject);
    }

    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> m;
        v.push_back(m);
    }

    for(i=0;i<q;i++)
    {
        book_id=v[i];

        bool flag=true;

        for(j=0;j<n;j++)
        {
            if(book_id==book[j].book_id)
            {
                cout << book[j].title << " by "<< book[j].author << endl;
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout << "Book not found " << endl;
        }

    }

}
