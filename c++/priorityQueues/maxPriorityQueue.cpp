#include <bits/stdc++.h>
using namespace std;

class PriorityQueue
{
    vector<int> pq;

public:
    PriorityQueue()
    {
    }
    void insert(int element)
    {
        pq.push_back(element);
        int currentIndex = pq.size() - 1;
        int parentIndex = (currentIndex - 1) / 2;
        while (currentIndex > 0)
        {
            if (pq[currentIndex] > pq[parentIndex])
            {
                int temp = pq[currentIndex];
                pq[currentIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            currentIndex--;
            parentIndex = (currentIndex - 1) / 2;
        }
    }

    int getMax()
    {
        if (pq.size() == 0)
        {
            return INT_MIN;
        }
        return pq[0];
    }

    int removeMax()
    {
        int temp = pq[0];
        pq[0] = pq[pq.size() - 1];
        int parentIndex = 0;
        int leftChildIndex = 1;
        int rightChildIndex = 2;
        while (leftChildIndex < pq.size() - 1)
        {
            int temp = pq[parentIndex];
            if (pq[leftChildIndex] > pq[rightChildIndex])
            {
                if (pq[parentIndex] < pq[leftChildIndex])
                {

                    pq[parentIndex] = pq[leftChildIndex];
                    pq[leftChildIndex] = temp;
                }
            }
            else
            {
                if (pq[parentIndex] < pq[rightChildIndex])
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

    int getSize()
    {
        return pq.size();
    }

    bool isEmpty()
    {
        return pq.size() == 0;
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
        case 2: // getMax
            cout << pq.getMax() << "\n";
            break;
        case 3: // removeMax
            cout << pq.removeMax() << "\n";
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