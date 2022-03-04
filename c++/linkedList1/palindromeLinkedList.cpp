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

Node *reverseLinkedList(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *currentNode = head;
    Node *previousNode = NULL;
    Node *nextNode = head->next;

    while (currentNode->next != NULL)
    {
        currentNode->next = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;
        nextNode = nextNode->next;
    }
    currentNode->next = previousNode;
    return currentNode;
}

bool isPalindrome(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *slowPointer = head;
    Node *fastPointer = head->next;
    while (fastPointer != NULL && fastPointer->next != NULL)
    {
        slowPointer = slowPointer->next;
        fastPointer = fastPointer->next->next;
    }
    Node *head2 = reverseLinkedList(slowPointer->next);
    slowPointer->next = NULL;
    while (head2 != NULL)
    {
        if (head->data != head2->data)
        {
            return false;
        }
        head = head->next;
        head2 = head2->next;
    }
    return true;
}

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
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
        bool ans = isPalindrome(head);

        if (ans)
            cout << "true";
        else
            cout << "false";

        cout << endl;
    }

    return 0;
}