void removeLoop(Node* head)
    {
        // Detect the loop using Floyd's Tortoise and Hare algorithm.
        Node* slow = head;
        Node* fast = head;
        
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast)
            {
                // Loop detected.
                break;
            }
        }
        
        if (slow != fast)
        {
            // No loop detected.
            return;
        }

        // Move one pointer to the head and keep the other at the meeting point.
        slow = head;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        // Find the node just before the starting node of the loop.
        while (fast->next != slow)
        {
            fast = fast->next;
        }

        // Set the next pointer of this node to NULL to remove the loop.
        fast->next = NULL;
    }
