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

Node *skipMdeleteN(Node *head, int m, int n)
{
    if (head == NULL || n == 0)
    {
        return head;
    }
    if (m == 0)
    {
        return NULL;
    }
    int i = 1;
    int j = 0;
    Node *tail = head;
    while (tail != NULL)
    {
        if (i == m)
        {
            Node *temp = tail;
            while (temp != NULL)
            {
                if (j == n)
                {
                    tail->next = temp->next;
                    j = 0;
                    break;
                }
                temp = temp->next;
                j++;
            }
            i = 0;
            if (temp == NULL)
            {
                tail->next = NULL;
                break;
            }
        }
        tail = tail->next;
        i++;
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
        Node *head = takeinput();
        int m, n;
        cin >> m >> n;
        head = skipMdeleteN(head, m, n);
        print(head);
    }
    return 0;
}