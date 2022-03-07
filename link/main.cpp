#include <iostream>

using namespace std;


class Node
{
public:
    int data;
    class Node*next;
}*first=NULL;


void Insert(int x)
{
    Node *temp1=new Node;
    temp1->data=x;
    temp1->next=first;
    first=temp1;
}
Node *Search(Node *p,int key)
{
    bool num=false;
    Node *q=NULL;
    while(p)
    {
        if(p->data==key)
        {
            num=true;

            q->next=p->next;
            p->next=first;
            first=p;

            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;


}


int main()
{
    int n,i,j,m;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> m;
        Insert(m);
    }

    cin >> j;

    if(Search(first,j))
    {
        cout << "YES";
    }
    else
    {
        cout << "No";
    }



}
