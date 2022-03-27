
void PrintReverse(ListNode *head)
{
    if(head)
    {
        PrintReverse(head->next)
        printf("%d ",head->val);
    }
}
