class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head == NULL || head->next == NULL){
            return head;
        }
        struct Node* curr = head;
        struct Node* prev = NULL;
        struct Node* forward = NULL;
        
        while(curr!=NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
};
