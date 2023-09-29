#include <iostream>
using namespace std;

// Node class to represent nodes of the binary tree
class Node {
public:
    Node* lchild;  // Left child pointer
    int data;      // Data stored in the node
    Node* rchild;  // Right child pointer
};

// Queue class for tree level order traversal
class Queue {
private:
    int size;      // Maximum size of the queue
    int front;     // Front index
    int rear;      // Rear index
    Node** Q;      // Array of Node pointers
public:
    Queue(int size);       // Constructor
    ~Queue();              // Destructor
    bool isFull();         // Check if the queue is full
    bool isEmpty();        // Check if the queue is empty
    void enqueue(Node* x); // Enqueue a Node pointer
    Node* dequeue();       // Dequeue a Node pointer
};

// Constructor for Queue class
Queue::Queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new Node*[size];
}

// Destructor for Queue class
Queue::~Queue() {
    delete[] Q;
}

// Check if the queue is empty
bool Queue::isEmpty() {
    return front == rear;
}

// Check if the queue is full
bool Queue::isFull() {
    return rear == size - 1;
}

// Enqueue a Node pointer
void Queue::enqueue(Node* x) {
    if (isFull()) {
        cout << "Queue Overflow" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}

// Dequeue a Node pointer
Node* Queue::dequeue() {
    Node* x = nullptr;
    if (isEmpty()) {
        cout << "Queue Underflow" << endl;
    } else {
        front++;
        x = Q[front];
    }
    return x;
}

// Tree class to represent a binary tree
class Tree {
private:
    Node* root; // Pointer to the root of the tree
public:
    Tree();            // Constructor
    ~Tree();           // Destructor
    void CreateTree(); // Create a binary tree
    // Various tree traversal methods
    void Preorder() { Preorder(root); }
    void Preorder(Node* p);
    void Postorder() { Postorder(root); }
    void Postorder(Node* p);
    void Inorder() { Inorder(root); }
    void Inorder(Node* p);
    void Levelorder() { Levelorder(root); }
    void Levelorder(Node* p);
    int Height() { return Height(root); }
    int Height(Node* p);
    Node* getRoot() { return root; }
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

    Queue q(25);
    root = new Node;
    cout << "Enter root value: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.enqueue(root);

    while (!q.isEmpty()) {
        p = q.dequeue();

        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter right child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.enqueue(t);
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
    Queue q(100);
    cout << root->data << ", " << flush;
    q.enqueue(root);

    while (!q.isEmpty()) {
        p = q.dequeue();
        if (p->lchild) {
            cout << p->lchild->data << ", " << flush;
            q.enqueue(p->lchild);
        }
        if (p->rchild) {
            cout << p->rchild->data << ", " << flush;
            q.enqueue(p->rchild);
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
    Tree t;

    t.CreateTree();

    cout << "Preorder: " << flush;
    t.Preorder(t.getRoot());
    cout << endl;

    cout << "Inorder: " << flush;
    t.Inorder(t.getRoot());
    cout << endl;

    cout << "Postorder: " << flush;
    t.Postorder(t.getRoot());
    cout << endl;

    cout << "Levelorder: " << flush;
    t.Levelorder(t.getRoot());
    cout << endl;

    cout << "Height: " << t.Height(t.getRoot()) << endl;

    cout << "Recursive Passing Private Parameter in Constructor" << endl;

    cout << "Preorder: " << flush;
    t.Preorder();
    cout << endl;

    cout << "Inorder: " << flush;
    t.Inorder();
    cout << endl;

    cout << "Postorder: " << flush;
    t.Postorder();
    cout << endl;

    cout << "Levelorder: " << flush;
    t.Levelorder();
    cout << endl;

    cout << "Height: " << t.Height() << endl;
}
