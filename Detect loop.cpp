 bool FlyodLoop(Node* head)
    {
        // your code here
        if(head == NULL)
            return false;
        Node *slow = head;
        Node *fast = head;
        while(fast!=NULL and slow!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;
            if(slow==fast)
                return true;
        }
        return false;
    }

   bool detectLoop(Node* head)
    {
        // your code here
        if(head == NULL)
            return false;
        map<Node*,bool>visited;
        Node *temp = head;
        while(temp!=NULL){
            //loop is present
            if(visited[temp] == true)
            {
                return true;
            }
            visited[temp] = true;
            temp = temp->next;
        }
        return false;
    }
