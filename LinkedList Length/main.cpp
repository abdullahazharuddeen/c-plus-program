
int length(ListNode *head)
{
    int res=0;
    while(head)
    {
        head=head->next;
        res++;
    }

    return res;
}
