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

Node *swapNodes(Node *head, int i, int j)
{
    if (head == NULL)
    {
        return head;
    }
    Node *current1 = head;
    Node *left1 = NULL;
    Node *right1 = head->next;
    Node *current2 = head;
    Node *left2 = NULL;
    Node *right2 = head->next;
    Node *temp = head;

    int i1 = i;
    int j1 = j;

    while (temp != NULL)
    {
        if (i1 != 0)
        {

            left1 = current1;
            current1 = right1;
            right1 = right1->next;
            i1--;
        }
        if (j1 != 0)
        {
            left2 = current2;
            current2 = right2;
            right2 = right2->next;
            j1--;
        }
        temp = temp->next;
    }

    if (i - j == 1 || i - j == -1)
    {
        if (left1 != NULL)
        {
            left1->next = current2;
        }
        current2->next = current1;
        current1->next = right2;
    }
    else
    {
        if (left1 != NULL)
        {
            left1->next = current2;
        }
        current2->next = right1;
        if (left2 != NULL)
        {
            left2->next = current1;
        }
        current1->next = right2;
    }
    if (i == 0)
    {
        return current2;
    }
    else if (j == 0)
    {
        return current1;
    }
    return head;
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
        int i, j;
        Node *head = takeinput();
        cin >> i;
        cin >> j;
        head = swapNodes(head, i, j);
        print(head);
    }
    return 0;
}