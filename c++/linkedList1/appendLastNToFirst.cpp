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

Node *appendLastNToFirst(Node *head, int n)
{
    if (head == NULL || n == 0)
    {
        return head;
    }
    Node *temp = head;
    Node *tail = head;
    int length = 1;
    while (tail->next != NULL)
    {
        tail = tail->next;
        length++;
    }
    int i = 0;

    while (i < length - n - 1)
    {
        i++;
        temp = temp->next;
    }
    Node *newHead = temp->next;
    tail->next = head;
    temp->next = NULL;
    return newHead;
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

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        int n;
        cin >> n;
        head = appendLastNToFirst(head, n);
        print(head);
    }
    return 0;
}