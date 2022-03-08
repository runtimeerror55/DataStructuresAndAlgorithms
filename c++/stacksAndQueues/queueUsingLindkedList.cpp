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
        next = NULL;
    }
};

class Queue
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
        length = 0;
    }
    int getSize()
    {
        return length;
    }

    bool isEmpty()
    {
        return length == 0;
    }
    void enqueue(int element)
    {
        Node *newNode = new Node(element);
        if (length == 0)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }
    int dequeue()
    {
        if (length == 0)
        {
            return -1;
        }
        else
        {
            int ans = head->data;
            Node *temp = head;
            head = head->next;
            delete temp;
            length--;
            return ans;
        }
    }
    int front()
    {
        if (head == NULL)
        {
            return -1;
        }
        else
        {
            return head->data;
        }
    }
};

int main()
{
    Queue q;

    int t;
    cin >> t;

    while (t--)
    {
        int choice, input;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin >> input;
            q.enqueue(input);
            break;
        case 2:
            cout << q.dequeue() << "\n";
            break;
        case 3:
            cout << q.front() << "\n";
            break;
        case 4:
            cout << q.getSize() << "\n";
            break;
        default:
            cout << ((q.isEmpty()) ? "true\n" : "false\n");
            break;
        }
    }
}