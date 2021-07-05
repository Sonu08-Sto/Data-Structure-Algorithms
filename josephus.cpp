#include<iostream>
#include<list>

using namespace std;

int winner(int n,int k)
{
    list<int> l;
    for(int i=0;i<n;i++)
    l.push_back(i);
    auto it=l.begin();
    while(l.size()>1)
    {
        for(int count=1;count<k;count ++)
        {
            it++;
            if(it== l.end())
            it=l.begin();
        }
        it=l.erase(it);
        if(it== l.end())
        it=l.begin();
    }
    return *l.begin();
}

int main()
{
    int n,k;
    cout<<"Enter the Number of persons = ";
    cin>>n;
    cout<<"Enter the passes = ";
    cin>>k;
    cout<<"Winner is = "<<winner(n,k);
    return 0;
}