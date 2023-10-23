#include <iostream>

using namespace std;

struct TreeNode {
    int a;
    TreeNode* L;
    TreeNode* R;
    
    TreeNode(int val) : a(val), L(nullptr), R(nullptr) {}
};

void in(TreeNode* root) {
    if (root) {
        in(root->L);
        cout << root->a << " ";
        in(root->R);
    }
}

void pre(TreeNode* root) {
    if (root) {
        cout << root->a << " ";
        pre(root->L);
        pre(root->R);
    }
}

void post(TreeNode* root) {
    if (root) {
        post(root->L);
        post(root->R);
        cout << root->a << " ";
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->L = new TreeNode(2);
    root->R = new TreeNode(3);
    root->L->L = new TreeNode(4);
    root->L->R = new TreeNode(5);

    cout << "In-order traversal: \n";
    in(root);
    cout << endl << "\n";

    cout << "Pre-order traversal: \n";
    pre(root);
    cout << endl << "\n";

    cout << "Post-order traversal: \n";
    post(root);
    cout << endl << "\n";

    delete root->L->L;
    delete root->L->R;
    delete root->L;
    delete root->R;
    delete root;

    return 0;
}
