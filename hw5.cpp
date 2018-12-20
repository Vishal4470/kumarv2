#include <iostream>
/// Vishal Kumar
/// HW #5 - Print binary tree using pre-order DFS.

using namespace std;
/// Preorder: <root> <left subtree> <right subtree>
struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data)
    {
        this -> data = data;
        left = right = NULL;
    }
};

void preOrder(struct Node* node)
{
    if(node == NULL)
        return;

    cout << node -> data << "  ";
    preOrder(node -> left);
    preOrder(node -> right);
}

int main()
{

cout << "     2     \n";
cout << "  7      5 \n";
cout << "2   6      9\n";
cout << "   5 11 4\n";

struct Node *root = new Node(2);
root -> left = new Node(7);
root -> left -> left = new Node(2);
root -> right = new Node(5);
root -> right -> right = new Node(6);
root -> right -> right -> right = new Node(11);
root -> right -> right -> right -> right = new Node(4);
root -> right -> right -> right -> right -> right = new Node(5);
root -> right -> right -> right -> right -> right -> right= new Node(9);

cout << "Preorder traversal: ";
preOrder(root);

return 0;
}
