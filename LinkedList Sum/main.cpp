int sum(ListNode *head)
{

    int res=0;
    while(head)
    {
        res+=head->val;
        head=head->next;
    }
    return res;
}
