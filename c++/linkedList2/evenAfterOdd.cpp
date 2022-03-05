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

Node *evenAfterOdd(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *evenHead = NULL;
    Node *evenTail = NULL;
    Node *oddHead = NULL;
    Node *oddTail = NULL;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data % 2 != 0)
        {
            if (oddHead == NULL)
            {
                oddHead = temp;
                oddTail = temp;
            }
            else
            {
                oddTail->next = temp;
                oddTail = oddTail->next;
            }
        }

        else
        {
            if (evenHead == NULL)
            {
                evenHead = temp;
                evenTail = temp;
            }
            else
            {
                evenTail->next = temp;
                evenTail = evenTail->next;
            }
        }
        temp = temp->next;
    }
    if (oddHead == NULL)
    {
        return evenHead;
    }
    if (evenTail != NULL)
    {
        evenTail->next = NULL;
    }
    oddTail->next = evenHead;
    return oddHead;
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
        head = evenAfterOdd(head);
        print(head);
    }
    return 0;
}