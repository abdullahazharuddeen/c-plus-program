#include <iostream>

using namespace std;


struct ListNode
{
  int val;
  struct ListNode *next;
}*first=NULL;

void Insert(int data)
{
     ListNode *temp=new ListNode;
    temp->val=data;
    temp->next=first;
    first=temp;

}

int sum(ListNode *head)
{
int res = 0;

while ( head)

  {
    res += head -> val;
    head = head -> next;

  }

  return res;

}

int main()
{
    int n;
    while(cin >> n)
    {
        Insert(n);
    }
    cout << sum(first);


}
