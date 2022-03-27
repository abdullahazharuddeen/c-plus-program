
class ListNode
{
public:
    int value;
    ListNode *move;
    ListNode(int value) : value(value), move(NULL) {}
};


class LinkedList
{
public:
    ListNode *first, *last;
    LinkedList()
    {
        first = NULL;
        last = NULL;
    }

    bool Empty()
    {
        return first == NULL;
    }

    void addFirst(int val)
    {
        if (last == NULL)
            first = last = new ListNode(val);
        else
        {
            ListNode *temperory = new ListNode(val);
            temperory->move = first;
            first = temperory;
        }
    }
    void addLast(int val)
    {
        if (last != NULL)
        {
            last->move = new ListNode(val);
            last = last->move;
        }
        else first = last = new ListNode(val);
    }

    bool removeFirst()
    {
        if (Empty()) return false;
        if (first == last)
            first = last = NULL;
        else first = first->move;
        return true;
    }

    bool removeLast()
    {
        if (Empty()) return false;
        if (first == last)
        {
            first = last = NULL;
        }
        else
        {
            ListNode *temperory;

            for (temperory = first; temperory->move != last; temperory = temperory->move);
            last = temperory;
            last->move = NULL;
        }
        return true;
    }

    void Print()
    {
        ListNode *first = this->first;
        while (first != NULL)
        {
            printf("%d ", first->value);
            first = first->move;
        }
printf("\n") ;
   }

    int size()
    {
        int count = 0;
        ListNode *first = this->first;
        while (first != NULL)
        {
            count++;
            first = first->move;
        }
        return count;
    }
};
