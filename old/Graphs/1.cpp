#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
void preOrder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

vector<vector<int>> levelOrder(Node *&root)
{
    vector<vector<int>> ans;
    if (root == NULL)
    {
        return ans;
    }
    // 1. push the root node
    queue<Node *> q;
    q.push(root);
    // 2 run a loop till queue is empty
    while (!q.empty())
    {
        vector<int> level;
        int size = q.size();
        // 3 run a loop till number of elements then after
        // which we will move to next element ie size of queue
        for (int i = 0; i < size; i++)
        {
            // 4 take out ,then pop and push his childrens
            Node *temp = q.front();
            q.pop();
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            level.push_back(temp->data);
        }
        ans.push_back(level);
    }
    return ans;
}
void iterativePreOrder(Node *&root)
{
    if (root == NULL)
        return;
    stack<Node *> s;

    s.push(root);
    while (!s.empty())
    {
        Node *top = s.top();
        s.pop();
        cout << top->data << " ";

        if (top->right)
        {
            s.push(top->right);
        }
        if (top->left)
        {
            s.push(top->left);
        }
    }
}
void iterativeInOrder(Node *&root)
{
    // 1 Point a node towards root
    Node *temp = root;
    stack<Node *> s;
    // 2 Run a infinite loop
    while (1)
    {
        // 3 a condition 1
        if (temp != NULL)
        {
            s.push(temp);
            temp = temp->left;
        }
        // condition 2
        else
        {
            if (s.empty())
            {
                return;
            }
            Node *top = s.top();
            s.pop();
            cout << top->data;
            top = top->right;
        }
    }
}
void iterativePostOrder(Node *&root){ 
     
}