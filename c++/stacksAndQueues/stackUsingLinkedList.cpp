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

class Stack
{
    Node *head;
    int length;

public:
    Stack()
    {
        head = NULL;
        length = 0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize()
    {
        return length;
    }

    bool isEmpty()
    {
        return length == 0;
    }

    void push(int element)
    {

        Node *newNode = new Node(element);
        if (head == NULL)
        {

            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        length++;
    }

    int pop()
    {
        if (head == NULL)
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

    int top()
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
    Stack st;

    int q;
    cin >> q;

    while (q--)
    {
        int choice, input;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin >> input;
            st.push(input);
            break;
        case 2:
            cout << st.pop() << "\n";
            break;
        case 3:
            cout << st.top() << "\n";
            break;
        case 4:
            cout << st.getSize() << "\n";
            break;
        default:
            cout << ((st.isEmpty()) ? "true\n" : "false\n");
            break;
        }
    }
}