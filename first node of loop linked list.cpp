int findFirstNode(Node* head) {
    Node* slow = head;
    Node* fast = head;
    Node* meet = NULL;
    Node* start = head;
    bool Loop = false;

    // Detect the loop using Floyd's Cycle Detection
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            Loop = true;
            meet = slow;
            break;
        }
    }

    // If there's no loop, return -1 or handle it as appropriate
    if (!Loop) {
        return -1; // or any other value or handle it according to your requirements
    }

    // Find the starting node of the loop
    while (start != meet) {
        start = start->next;
        meet = meet->next;
    }

    return start->data;
}
