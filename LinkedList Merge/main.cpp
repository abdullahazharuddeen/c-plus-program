ListNode* merge(ListNode *l1, ListNode *l2)
{

ListNode* res=new ListNode(0);
ListNode* current=res;

while(true)
{
    if(l1==NULL)
    {
        current->next=l2;
        break;
    }

    if(l2==NULL)
    {
        current->next=l1;
        break;
    }

    if(l1->val <l2->val)
    {
 current->next =l1;
l1=l1->next;
    }
    else
    {
        current->next =l2;
        l2=l2->next;
    }
    current=current->next;
}
return res->next;
}

