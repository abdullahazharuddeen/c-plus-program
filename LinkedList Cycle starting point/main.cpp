ListNode* detectCycle(ListNode *head)
{
    if(head==NULL)
    {
        return 0;
    }

    ListNode* fast=head;
    ListNode* slow=head;

    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow)
        {
            fast=head;
            while(fast!=slow)
            {
                slow=slow->next;
                fast=fast->next;

            }
            return slow;
        }
    }
    return 0;

}
