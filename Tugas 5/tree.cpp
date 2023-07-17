#include<iostream>

using namespace std;

class Node {
	public:
		int data; // kosong
		Node* left;
		Node* right;
		
		Node(int value) {
			data = value; // data nilainya sama dengan root
			left = NULL; // nilai sebelah kiri belum terdefinisi
			right = NULL; // nilai sebelah kanan belum terdefinisi
		}
};

class Tree {
	public:
		Node* root;
		
		// constructor
		Tree() {
			root = NULL; /// belum terdefinisi
		}
		
		void insert(int value) {
			root = insert(root, value);
		}
		
		Node* insert(Node* node, int value) {
			// kalau root masih kosong
			if (node == NULL) {
				node = new Node(value); // diisi oleh inputan user
			} 
			// jika data yang dimasukkan lebih kecil daripada elemen root, maka akan diletakkan di node sebelah kiri
			else if(value <= node->data) {
				node->left = insert(node->left, value);
			}
			// jika data yang dimasukkan lebih kecil daripada elemen root, maka akan diletakkan di node sebelah kanan
			else {
				node->right = insert(node->right, value);
			}
			return node;
		}
		
		void inorder() {
			inorder(root); // ngambil nilai paling atas atau paling awal
		}
		
		void inorder(Node* node) {
			if (node == NULL) return;
			inorder(node->left);
			cout << node->data << " "; // ditampilin dalam satu baris,
			inorder(node->right);
		}
};

int main() {
	// create object
	Tree tree;
	
	// input value for class Tree
	tree.insert(20);
	tree.insert(3);
	tree.insert(40);
	tree.insert(60);
	tree.insert(70);
	tree.insert(10);
	tree.insert(5);
	tree.inorder();
	
	return 0;
}
