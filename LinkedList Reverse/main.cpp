ListNode* reverse(ListNode* p)
{
if(!p)
{
return p;
}

//ListNode* p=head;
ListNode* q=NULL;
ListNode* r=NULL;

while(p)
{



r=q;
q=p;
p=p->next;
q->next=r;

}
return q;
}
