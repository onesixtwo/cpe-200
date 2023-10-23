#include <iostream>
using namespace std;

struct Node {
    string D;
    struct Node *L, *R;
};

Node* nNode(string data) {
    Node* temp = new Node;
    temp->D = data;
    temp->L = temp->R = NULL;
    return temp;
}

int main() {
    Node* rt = nNode("Cat");

    rt->L = nNode("Ace");
    rt->R = nNode("Dog");

    rt->L->L = nNode("Abe");  
    rt->R->L = nNode("Eel"); 
    rt->L->R = nNode("Beak");
    rt->R->R = nNode("Dig");

    cout << rt->L->L->D << "\n";
    cout << rt->L->R->D << "\n";
    cout << rt->R->R->D;

    return 0;
}
