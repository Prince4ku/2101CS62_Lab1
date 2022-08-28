#include <bits/stdc++.h>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void deletefromheap()
    {
        if (size == 0)
        {
            cout << "nothing to delete from here" << endl;
            return;
        }
        else
        {
            // we make last node as first and decrement the size;
            arr[1] = arr[size];
            size--;
            int i = 1;
            while (i < size)
            {
                int l = (2 * i);
                int r = (2 * i) + 1;
                if (l <= size && arr[i] < arr[l])
                {
                    swap(arr[i], arr[l]);
                    i = l;
                }
                else if (r <= size && arr[i] < arr[r])
                {
                    swap(arr[i], arr[r]);
                    i = r;
                }
                else
                {
                    return;
                }
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; ++i)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    heap h;
    h.deletefromheap();
    h.insert(5);
    h.insert(12);
    h.insert(4);
    h.insert(23);
    h.insert(2);
     h.deletefromheap();
    h.print();

    return 0;
}