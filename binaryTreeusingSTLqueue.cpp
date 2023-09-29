#include <iostream>
#include <queue> // Include the queue library for level order traversal

using namespace std;

// Node class to represent nodes of the binary tree
class Node {
public:
    Node* lchild; // Pointer to the left child
    int data;     // Data stored in the node
    Node* rchild; // Pointer to the right child
};

// Tree class to represent a binary tree
class Tree {
private:
    Node* root; // Pointer to the root of the tree

public:
    Tree();            // Constructor
    ~Tree();           // Destructor
    void CreateTree(); // Create a binary tree
    // Various tree traversal methods
    void Preorder(Node* p);
    void Preorder() { Preorder(root); } // Preorder traversal starting from root
    void Inorder(Node* p);
    void Inorder() { Inorder(root); } // Inorder traversal starting from root
    void Postorder(Node* p);
    void Postorder() { Postorder(root); } // Postorder traversal starting from root
    void Levelorder(Node* p);
    void Levelorder() { Levelorder(root); } // Level order traversal starting from root
    int Height(Node* p);
    int Height() { return Height(root); } // Height of the tree starting from root
};

// Constructor for Tree class
Tree::Tree() {
    root = nullptr;
}

// Destructor for Tree class (to be implemented)
Tree::~Tree() {
    // TODO: Implement destructor to release memory
}

// Create a binary tree
void Tree::CreateTree() {
    Node* p;
    Node* t;
    int x;
    queue<Node*> q;

    root = new Node;
    cout << "Enter root data: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.emplace(root);

    while (!q.empty()) {
        p = q.front();
        q.pop();

        cout << "Enter left child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.emplace(t);
        }

        cout << "Enter right child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.emplace(t);
        }
    }
}

// Preorder traversal of the tree
void Tree::Preorder(Node* p) {
    if (p) {
        cout << p->data << ", " << flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

// Inorder traversal of the tree
void Tree::Inorder(Node* p) {
    if (p) {
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
}

// Postorder traversal of the tree
void Tree::Postorder(Node* p) {
    if (p) {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}

// Level order traversal of the tree
void Tree::Levelorder(Node* p) {
    queue<Node*> q;
    cout << root->data << ", " << flush;
    q.emplace(root);

    while (!q.empty()) {
        p = q.front();
        q.pop();

        if (p->lchild) {
            cout << p->lchild->data << ", " << flush;
            q.emplace(p->lchild);
        }

        if (p->rchild) {
            cout << p->rchild->data << ", " << flush;
            q.emplace(p->rchild);
        }
    }
}

// Calculate the height of the tree
int Tree::Height(Node* p) {
    int l = 0;
    int r = 0;
    if (p == nullptr) {
        return 0;
    }

    l = Height(p->lchild);
    r = Height(p->rchild);

    if (l > r) {
        return l + 1;
    } else {
        return r + 1;
    }
}

int main() {
    Tree bt;

    bt.CreateTree();
    cout << endl;

    cout << "Preorder: " << flush;
    bt.Preorder();
    cout << endl;

    cout << "Inorder: " << flush;
    bt.Inorder();
    cout << endl;

    cout << "Postorder: " << flush;
    bt.Postorder();
    cout << endl;

    cout << "Levelorder: " << flush;
    bt.Levelorder();
    cout << endl;

    cout << "Height: " << bt.Height() << endl;

    return 0;
}
