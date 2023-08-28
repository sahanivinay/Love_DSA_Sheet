class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head == NULL)
        return NULL;
        
        struct node *nexxt = NULL;
        struct node *curr = head;
        struct node *prev = NULL;
        int count = 0;
        while(curr != NULL && count < k)
        {
            nexxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nexxt;
            count++;
        }
        if(nexxt!=NULL){
            head->next = reverse(nexxt,k);
        }
        return prev;
    }
};
