#include <iostream>

using namespace std;

long array[1000],j=0,array2[100000];
class Node
{
public:
    int data;
    class Node *next;
} *first=NULL;



void Insert(int x)
{
    Node *temp1=new Node;
    temp1->data=x;
    temp1->next=first;
    first=temp1;
}

void Display(class Node *p)
{
    int i=0;
    Node*q =p;
    while(q)
    {
        //cout << p->data;
    array2[i++]=q->data;
    q=q->next;
    }
i--;

    while(p)
    {
        //cout << array2[i--] << " ";
       p->data=array2[i--];
        p=p->next;
    }

}

void Display2(class Node *p)
{
    while(p)
    {
        cout << p->data << " ";
        p=p->next;

    }
}


int main()
{
    int n,m;

    cin >> n;


    for(int i=0;i<n;i++)
    {
        cin >> array[i];

    }

    for(int i=n-1;i>=0;i--)
    {
        //cout << array[i] << " ";
        Insert(array[i]);
    }

Display(first);
Display2(first);


}
