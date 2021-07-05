#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct hashh
{
        int *arr;
        int cap,size;
        hashh(int c)
        {
            cap=c;
            size=0;
            arr=new int[cap];
            for(int i=0;i<cap;i++)
            {
            arr[i]=-1;
            }
        }
    int hash1(int key)
    {
        return key %cap;
    }    
    bool insert(int key)
    {

         if(size==cap)
         return false;

         int i=hash1(key);
         while(arr[i]!= -1 && arr[i]!= -2 && arr[i]==key)
         i=(i+1)%cap;
         if(arr[i]==key)
         return false;
         else
         {
             arr[i]=key;
             size++;
             return  true;
         }

    }
    bool deleete(int key)
    {
        int h=hash1(key);
        int i=h;
        while(arr[i]!=-1)
            {
                if(arr[i]==key)
                {
                arr[i]=-2;
                return  true;
                }
                i=(i+1)%cap;
                if(i==h)
                return false;
            }
            return false;
    }
    bool search(int key)
    {
        int h=hash1(key);
        int i=h;
        while(arr[i]!=-1)
            {
                if(arr[i]==key)
                return  true;
                i=(i+1)%cap;
                if(i==h)
                return false;
            }
          return false;  
    }
};

int main()
{
    hashh h(7);
    cout<<h.insert(98)<<endl;
    cout<<h.insert(68)<<endl;
    cout<<h.insert(58)<<endl;
    cout<<h.insert(48)<<endl;
    cout<<h.insert(11)<<endl;
    cout<<h.search(68)<<endl;
    cout<<h.deleete(48)<<endl;
    cout<<h.search(48)<<endl;
    cout<<"Program is completed ";
    return 0;
}