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

pair<pair<int, int>, pair<int, bool>> helper(BinaryTreeNode<int> *root)
{
    pair<pair<int, int>, pair<int, bool>> subAnswer({INT_MAX, INT_MIN}, {0, true});
    if (root == NULL)
    {
        return subAnswer;
    }

    pair<pair<int, int>, pair<int, bool>> left = helper(root->left);
    pair<pair<int, int>, pair<int, bool>> right = helper(root->right);

    if (!left.second.second || !right.second.second || root->data < left.first.second || root->data > right.first.first)
    {
        subAnswer.second.second = false;
        subAnswer.second.first = max(left.second.first, right.second.first);
    }

    else
    {
        subAnswer.second.first = max(left.second.first, right.second.first) + 1;
    }

    subAnswer.first.first = min(root->data, max(left.first.first, right.first.first));
    subAnswer.first.second = max(root->data, max(left.first.second, right.first.second));
    return subAnswer;
}

int largestBSTSubtree(BinaryTreeNode<int> *root)
{
    return helper(root).second.first;
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
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    cout << largestBSTSubtree(root);
    delete root;
}