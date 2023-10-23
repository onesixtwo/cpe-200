#include <iostream>

using namespace std;

struct TreeNode {
    int value;
    TreeNode* L;
    TreeNode* R;

    TreeNode(int val) : value(val), L(nullptr), R(nullptr) {}
};

TreeNode* tree() {
    TreeNode* root = new TreeNode(1);
    root->L = new TreeNode(2);
    root->R = new TreeNode(3);
    root->L->L = new TreeNode(4);
    root->L->R = new TreeNode(5);
    root->R->L = new TreeNode(6);
    root->R->R = new TreeNode(7);

    return root;
}

void parent(TreeNode* root, TreeNode* target) {
    if (root == nullptr)
        return;

    if ((root->L == target) || (root->R == target)) {
        cout << "Parent: " << root->value << endl;
    }

    parent(root->L, target);
    parent(root->R, target);
}

void child(TreeNode* target) {
    if (target == nullptr)
        return;

    if (target->L != nullptr)
        cout << "Left Child: " << target->L->value << endl;

    if (target->R != nullptr)
        cout << "Right Child: " << target->R->value << endl;
}

void leaf(TreeNode* root) {
    if (root == nullptr)
        return;

    if (root->L == nullptr && root->R == nullptr)
        cout << "Leaf: " << root->value << endl;

    leaf(root->L);
    leaf(root->R);
}

void sib(TreeNode* root, TreeNode* target) {
    if (root == nullptr || target == nullptr)
        return;

    if (root->L == target && root->R != nullptr) {
        cout << "Sibling: " << root->R->value << endl;
    }
    else if (root->R == target && root->L != nullptr) {
        cout << "Sibling: " << root->L->value << endl;
    }

    sib(root->L, target);
    sib(root->R, target);
}

int height(TreeNode* root) {
    if (root == nullptr)
        return 0;

    int leftHeight = height(root->L);
    int rightHeight = height(root->R);

    return 1 + max(leftHeight, rightHeight);
}

void inTrav(TreeNode* root) {
    if (root == nullptr)
        return;

    inTrav(root->L);
    cout << root->value << " ";
    inTrav(root->R);
}

void preTrav(TreeNode* root) {
    if (root == nullptr)
        return;

    cout << root->value << " ";
    preTrav(root->L);
    preTrav(root->R);
}

void postTrav(TreeNode* root) {
    if (root == nullptr)
        return;

    postTrav(root->L);
    postTrav(root->R);
    cout << root->value << " ";
}

int main() {
    TreeNode* root = tree();

    cout << "\n";
    cout << "Root: " << root->value << endl;

    cout << "\n";
    parent(root, root->L);
    parent(root, root->R);

    cout << "\n";
    child(root);

    cout << "\n";
    leaf(root);

    cout << "\n";
    sib(root, root->L->L);

    cout << "\n";
    int maxHeight = height(root);
    cout << "Maximum Height: " << maxHeight << endl;

    cout << "\n";
    cout << "In-order Traversal: ";
    inTrav(root);
    cout << endl;

    cout << "\n";
    cout << "Pre-order Traversal: ";
    preTrav(root);
    cout << endl;

    cout << "\n";
    cout << "Post-order Traversal: ";
    postTrav(root);
    cout << "\n";
    cout << "\n";

    return 0;
}
