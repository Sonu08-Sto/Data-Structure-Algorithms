#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

struct Heap
{
    int *arr;
    int size;
    int cap;
    Heap(int x)
    {
        cap=x;
        size=0;
        arr=new int[cap];
        
    }

    int left(int i)
    {
        return 2*i+1;
    }
    int right(int i)
    {
        return 2*i+2;
    }
    int parent(int i)
    {
        return (size-1)/2;
    }

    void Insert(int x)
    {
        if(size==cap)
        return;
        size++;
        arr[size-1]=x;
        for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];)
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }

    void Heapify(int i)
    {
        int smallest=i;
        int leftt=left(i);
        int rightt=right(i);
        if(leftt < size && arr[leftt] < arr[smallest])
        smallest=leftt;
        if(rightt < size && arr[rightt] < arr[smallest])
        smallest=rightt;
        if(smallest != i)
        {
            swap(arr[i],arr[smallest]);
            Heapify(smallest);
        }
    }

    void BuildHeap()
    {
        for(int i=(size-2)/2;i>=0;i--)
        {
            Heapify(i);
        }
    }

    void print()
    {
        for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    }

    int extract()
    {
        if(size==0)
        return NULL;
        if(size==1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        Heapify(0);
        return arr[size];
    }

    void decreaseKey(int i,int x)
    {
        arr[i-1]=x;
        while(i != 0 && arr[parent(i)]>arr[i])
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }

    void deletee(int i)
    {
        decreaseKey(i,INT_MIN);
        extract();
    }
};

int main()
{
    Heap h(5);
    h.Insert(10);
    h.Insert(20);
    h.Insert(30);
    h.Insert(40);
    h.Insert(50);
    h.print();
    h.BuildHeap();
    cout<<endl;
    h.decreaseKey(3,10);
    h.print();
    cout<<endl;
    cout<<h.extract()<<endl;
    h.deletee(1);
    cout<<h.extract();
    h.deletee(1);
    cout<<h.extract();
}