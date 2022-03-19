#include <bits/stdc++.h>
using namespace std;

class PriorityQueue
{
    vector<int> pq;

public:
    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int getSize()
    {
        return pq.size();
    }

    int getMin()
    {
        if (isEmpty())
        {
            return 0;
        }

        return pq[0];
    }

    void insert(int element)
    {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex])
            {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else
            {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin()
    {
        int temp = pq[0];
        pq[0] = pq[pq.size() - 1];
        int parentIndex = 0;
        int leftChildIndex = 1;
        int rightChildIndex = 2;
        while (leftChildIndex < pq.size() - 1)
        {
            int temp = pq[parentIndex];
            if (pq[leftChildIndex] < pq[rightChildIndex])
            {
                if (pq[parentIndex] > pq[leftChildIndex])
                {

                    pq[parentIndex] = pq[leftChildIndex];
                    pq[leftChildIndex] = temp;
                }
            }
            else
            {
                if (pq[parentIndex] > pq[rightChildIndex])
                {
                    pq[parentIndex] = pq[rightChildIndex];
                    pq[rightChildIndex] = temp;
                }
            }

            parentIndex++;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = leftChildIndex + 1;
        }
        pq.pop_back();
        return temp;
    }
};

int main()
{
    PriorityQueue pq;

    int choice;
    cin >> choice;

    while (choice != -1)
    {
        switch (choice)
        {
        case 1: // insert
            int element;
            cin >> element;
            pq.insert(element);
            break;
        case 2: // getMin
            cout << pq.getMin() << "\n";
            break;
        case 3: // removeMax
            cout << pq.removeMin() << "\n";
            break;
        case 4: // size
            cout << pq.getSize() << "\n";
            break;
        case 5: // isEmpty
            cout << (pq.isEmpty() ? "true\n" : "false\n");
        default:
            return 0;
        }

        cin >> choice;
    }
}