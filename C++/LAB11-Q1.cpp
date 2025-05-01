#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

bool isBSTUtil(Node* node, int min, int max) {
    if (node == nullptr) return true;
    if (node->data <= min || node->data >= max) return false;
    return isBSTUtil(node->left, min, node->data) && isBSTUtil(node->right, node->data, max);
}

bool isBST(Node* root) {
    return isBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    if (isBST(root))
        cout << "The tree is a Binary Search Tree." << endl;
    else
        cout << "The tree is not a Binary Search Tree." << endl;

    return 0;
}
