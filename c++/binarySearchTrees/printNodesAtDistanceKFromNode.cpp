#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};

void helper(BinaryTreeNode<int> *root, int targetNode, vector<pair<BinaryTreeNode<int> *, char> *> &v)
{
    pair<BinaryTreeNode<int> *, char> *p = new pair<BinaryTreeNode<int> *, char>(root, 'p');
    if (root == NULL)
    {
        return;
    }
    if (root->data == targetNode)
    {
        p->second = 'p';
        v.push_back(p);
        return;
    }

    helper(root->left, targetNode, v);

    if (v.size() > 0)
    {
        p->second = 'L';
        v.push_back(p);
        return;
    }
    helper(root->right, targetNode, v);

    if (v.size() > 0)
    {
        p->second = 'R';
        v.push_back(p);
    }
}

void printNodes(BinaryTreeNode<int> *root, int depth)
{
    if (root == NULL)
    {
        return;
    }
    if (depth == 0)
    {
        cout << root->data << " ";
        return;
    }
    printNodes(root->left, depth - 1);
    printNodes(root->right, depth - 1);
}

void nodesAtDistanceK(BinaryTreeNode<int> *root, int targetNode, int k)
{
    vector<pair<BinaryTreeNode<int> *, char> *> v;
    helper(root, targetNode, v);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]->second == 'L')
        {
            if (k - i == 0)
            {
                cout << v[i]->first->data << " ";
            }
            else if (k - i > 0)
            {
                printNodes(v[i]->first->right, k - i - 1);
            }
        }
        else if (v[i]->second == 'R')
        {
            if (k - i == 0)
            {
                cout << v[i]->first->data << " ";
            }
            else if (k - i > 0)
            {
                printNodes(v[i]->first->left, k - i - 1);
            }
        }
        else
        {
            printNodes(v[i]->first, k);
        }
    }
}
BinaryTreeNode<int> *takeInput()
{
    int rootData;

    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    int targetNode, k;
    cin >> targetNode >> k;
    nodesAtDistanceK(root, targetNode, k);
    delete root;
}