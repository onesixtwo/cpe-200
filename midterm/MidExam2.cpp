#include <iostream>
using namespace std;

struct Node {
    string data;
    struct Node *L, *R;
};

Node* createNode(string data) {
    Node* nNode = new Node;
    nNode->data = data;
    nNode->L = nNode->R = NULL;
    return nNode;
}

void insertNode(Node*& root, string data) {
    if (!root) {
        root = createNode(data);
    } else {
        if (data < root->data) {
            insertNode(root->L, data);
        } else {
            insertNode(root->R, data);
        }
    }
}

void show(Node* root) {
    if (root) {
        show(root->L);
        cout << root->data << " ";
        show(root->R);
    }
}

int main() {
    int numNodes;
    cout << "Enter the number of nodes: ";
    cin >> numNodes;

    Node* root = nullptr;
    string nodeValue;

    for (int i = 0; i < numNodes; ++i) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> nodeValue;
        insertNode(root, nodeValue);
    }

    cout << "Tree elements: \n";
    show(root);

    return 0;
}
