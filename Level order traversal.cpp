 vector<int> levelOrder(Node* root) {
    vector<int> result; // Initialize an empty vector to store the level order traversal

    if (root == NULL) {
        return result; // Return an empty vector if the tree is empty
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        result.push_back(temp->data); // Push the data into the result vector

        if (temp->left) {
            q.push(temp->left);
        }

        if (temp->right) {
            q.push(temp->right);
        }
    }

    return result; // Return the vector containing level order traversal
}
