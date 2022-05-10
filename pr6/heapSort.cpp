#include <iostream>
#include <vector>
#include <unordered_map>


class BinaryHeap
{
private:
    std::vector<int> heap;

    void swap(int &a, int &b)
    {
        int temp = int(a);
        a = int(b);
        b = temp;
    }

public:
    int heapSize()
    {
        return heap.size();
    }

    BinaryHeap(std::vector<int> h) : heap(h)
    {
        for (int i = heapSize() - 1; i >= 0; i--)
        {
            heapify(i);
        }
    }


    void add(int newElement)
    {
        int newElementIndex = heapSize();
        heap.push_back(newElement);
        int parent = (newElementIndex - 1) / 2;
        while(newElementIndex > 0 && heap[parent] < heap[newElementIndex])
        {
            swap (heap[newElementIndex], heap[parent]);
            newElementIndex = parent;
            parent = (newElementIndex - 1) / 2;
        }
    }

    void heapify(int i)
    {
        int leftChild = 0;
        int rightChild = 0;
        int largestChild = 0;
        while (true)
        {
            leftChild = 2 * i + 1;
            rightChild = 2 * i + 2;
            largestChild = i;
            if (leftChild < heapSize() && heap[largestChild] < heap[leftChild])
            {
                largestChild = leftChild;
            }
            if (rightChild < heapSize() && heap[largestChild] < heap[rightChild])
            {
                largestChild = rightChild;
            }
            if (largestChild == i)
            {
                break;
            }
            swap(heap[i], heap[largestChild]);
            i = largestChild;
        }
    }

    int getMax()
    {
        int result = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapify(0);
        return result;
    }

    void echoBinaryHeap()
    {
        for (int i = 0; i < heapSize(); i++)
        {
            std::cout<<heap[i]<<" ";
        }
        std::cout<<std::endl;
    }

};

int withoutD(std::vector<int> nums)
{
    int result = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        result = result ^ nums[i];
    }
    return result;

}

int without(std::vector<int> nums)
{
    std::unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.find(nums[i]) != map.end())
        {
            map[nums[i]]++;
        }
        else
        {
            map.insert(std::pair<int, int> (nums[i], 1));
        }
    }
    for (auto it = map.begin(); it != map.end(); ++it)
    {
        if (it -> second == 1)
        {
            return it ->first;
        }
    }
    return 0;
}

int main()
{
    /*
    BinaryHeap heap = BinaryHeap(std::vector<int> {5, 8, 4, 3, 1, 9, 18, 25, 14, 91, 55, 7, 2, 14, 16});
    while (heap.heapSize())
    {
        std::cout<<heap.getMax()<<" ";
    }
    std::cout<<std::endl;
    */

   std::cout<<without(std::vector<int> {1, 0, 1, 2, 2, 2, 0, 3, 3})<<std::endl;

}