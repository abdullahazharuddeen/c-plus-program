int hasCycle(ListNode *head)
{
    if(head==NULL)
    {
        return 0;
    }

    ListNode* Lambogini=head->next;
    ListNode* Toyota=head;

    while(Lambogini && Lambogini->next &&Toyota)
    {
        if(Lambogini==Toyota)
        {
            return 1;
        }

        Lambogini=Lambogini->next->next;
        Toyota=Toyota->next;

    }
    return 0;

}
