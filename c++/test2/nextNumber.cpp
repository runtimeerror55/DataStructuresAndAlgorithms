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

Node *NextLargeNumber(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp1 = head;
    Node *previous = NULL;

    while (temp1 != NULL)
    {
        if (temp1->data == 9)
        {
            Node *temp2 = temp1;
            while (temp2 != NULL && temp2->data == 9)
            {
                temp2 = temp2->next;
            }
            if (temp2 == NULL)
            {
                if (previous == NULL)
                {
                    Node *newNode = new Node(1);
                    Node *temp3 = head;
                    while (temp3 != NULL)
                    {
                        temp3->data = 0;
                        temp3 = temp3->next;
                    }

                    newNode->next = head;
                    return newNode;
                }
                else
                {

                    Node *temp3 = temp1;
                    while (temp3 != NULL)
                    {
                        temp3->data = 0;
                        temp3 = temp3->next;
                    }
                    previous->data = previous->data + 1;
                    break;
                }
            }
            else
            {
                previous = temp1;
                temp1 = temp1->next;
            }
        }
        else
        {
            previous = temp1;
            temp1 = temp1->next;
        }
    }
    previous->data = previous->data + 1;
    return head;
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
    Node *head = takeinput();

    head = NextLargeNumber(head);
    print(head);
    return 0;
}
