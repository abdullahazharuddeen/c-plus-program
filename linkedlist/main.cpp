#include <iostream>

using namespace std;


struct Node
{
    int data;
    struct Node*next;

}*first=NULL;




void Insert(int data)
{
    Node*temp1=new Node;
    temp1->data=data;
    temp1->next=first;
    first=temp1;


}

void Print1(struct Node*temp1)
{

    if(temp1!=NULL)
    {

        Print1(temp1->next);
        cout << temp1->data << " ";

    }
}
void ending()
{
    cout << endl;
}

void Print(struct Node*temp1)
{



    while(temp1!=NULL)
    {


       cout << temp1->data << " ";

        temp1=temp1->next;

    }
}

int main()
{
    int n,i,m;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> m;
        Insert(m);
    }


    Print1(first);
      ending();
 Print(first);
}
