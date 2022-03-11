#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

template <typename T>
class NodePair
{
public:
    TreeNode<T> *node;
    T sum;
    NodePair(TreeNode<T> *node, T sum)
    {
        this->sum = sum;
        this->node = node;
    }
};

NodePair<int> *helper(TreeNode<int> *root)
{

    NodePair<int> *subAnswer = new NodePair<int>(root, root->data);

    for (int i = 0; i < root->children.size(); i++)
    {
        NodePair<int> *childPair = helper(root->children[i]);
        if (subAnswer->sum < childPair->sum)
        {
            subAnswer = childPair;
        }
    }

    int sum = root->data;

    for (int i = 0; i < root->children.size(); i++)
    {
        sum += root->children[i]->data;
    }
    if (sum > subAnswer->sum)
    {
        subAnswer->node = root;
        subAnswer->sum = sum;
    }
    return subAnswer;
}

TreeNode<int> *maxSumNode(TreeNode<int> *root)
{
    return helper(root)->node;
}

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();

    TreeNode<int> *ans = maxSumNode(root);

    if (ans != NULL)
    {
        cout << ans->data;
    }
}