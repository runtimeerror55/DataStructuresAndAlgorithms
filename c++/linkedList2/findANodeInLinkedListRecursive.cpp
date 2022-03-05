#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int findNodeRecursively(Node *head, int n)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == n)
    {
        return 0;
    }
    int subAnswer = findNodeRecursively(head->next, n);
    if (subAnswer == -1)
    {
        return -1;
    }
    else
    {
        return 1 + subAnswer;
    }
}

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        int val;
        cin >> val;
        cout << findNodeRecursively(head, val) << endl;
    }
}