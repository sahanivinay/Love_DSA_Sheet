vector<int> reverseLevelOrder(Node* root) {
    vector<int> result; // Initialize an empty vector to store the reverse level order traversal

    if (root == NULL) {
        return result; // Return an empty vector if the tree is empty
    }

    queue<Node*> q;
    stack<int> s; // Use a stack to reverse the order

    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        s.push(temp->data); // Push the data into the stack instead of the result vector

        // Push right child before left child to reverse the order
        if (temp->right) {
            q.push(temp->right);
        }

        if (temp->left) {
            q.push(temp->left);
        }
    }

    // Pop elements from the stack and push them into the result vector to reverse the order
    while (!s.empty()) {
        result.push_back(s.top());
        s.pop();
    }

    return result; // Return the vector containing reverse level order traversal
}
