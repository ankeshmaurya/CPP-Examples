#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};
Node* createBalancedBST(vector<int>& arr, int start, int end) {
    if (start > end) return nullptr;

    int mid = (start + end) / 2;
    Node* node = new Node(arr[mid]);

    node->left = createBalancedBST(arr, start, mid - 1);
    node->right = createBalancedBST(arr, mid + 1, end);

    return node;
}



















void inOrderTraversal(Node* root) {
    if (root == nullptr) return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main() {
    vector<int> arr = {35, 50, 40, 25, 30, 60, 78, 20, 28};
    sort(arr.begin(), arr.end());
    Node* root = createBalancedBST(arr, 0, arr.size() - 1);
    cout << "In-order traversal of the balanced BST: ";
    inOrderTraversal(root);

    return 0;
}
