#include <iostream>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
};

class BinaryTree {
    public:
        node *root;
        BinaryTree() {
            root = NULL;
        }
        void insert(int value) {
            root = insert(root, value);
        }
        node *insert(node *current, int value) {
            if (current == NULL) {
                current = new node;
                current->data = value;
                current->left = NULL;
                current->right = NULL;
            } else if (value < current->data) {
                current->left = insert(current->left, value);
            } else {
                current->right = insert(current->right, value);
            }
            return current;
        }
        void preOrderTraversal(node *current) {
            if (current != NULL) {
                cout << current->data << " ";
                preOrderTraversal(current->left);
                preOrderTraversal(current->right);
            }
        }
        void inOrderTraversal(node *current) {
            if (current != NULL) {
                inOrderTraversal(current->left);
                cout << current->data << " ";
                inOrderTraversal(current->right);
            }
        }
        void postOrderTraversal(node *current) {
            if (current != NULL) {
                postOrderTraversal(current->left);
                postOrderTraversal(current->right);
                cout << current->data << " ";
            }
        }
};

int main() {
    BinaryTree tree;
    tree.insert(12);
    tree.insert(16);
    tree.insert(20);
    tree.insert(24);
    tree.insert(32);

    cout << "Pre-order traversal: ";
    tree.preOrderTraversal(tree.root);
    cout << endl;

    cout << "In-order traversal: ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    cout << "Post-order traversal: ";
    tree.postOrderTraversal(tree.root);
    cout << endl;

    return 0;
}