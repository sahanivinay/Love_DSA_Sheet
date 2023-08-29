
LinkedListNode<int>* moveToFront(LinkedListNode<int>* head) {
    if (head == nullptr || head->next == nullptr) {
        return head; // If the list is empty or has only one node, no change needed
    }

    LinkedListNode<int>* current = head;

    while (current->next->next != nullptr) {
        current = current->next;
    }

    LinkedListNode<int>* last = current->next;
    current->next = nullptr; // Remove the last node from the list
    last->next = head; // Attach the last node to the old head

    return last; // The last node is now the new head
}
