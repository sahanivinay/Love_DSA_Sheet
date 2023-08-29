Node* removeDuplicates(Node* head) {
    if (head == NULL)
        return NULL;

    Node* current = head;

    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            Node* nextNext = current->next->next;
            delete current->next; // Delete the duplicate node
            current->next = nextNext; // Update the next pointer

            // Note that we do not move the current pointer in this case
        } else {
            current = current->next; // Move to the next node
        }
    }

    return head;
}
