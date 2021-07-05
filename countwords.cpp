#include<iostream>

using namespace std;

int main()
{
    string c="In the world of computes the name steave jobs is too popoularrr";
    int m=c.size();
    int count =1;
    for(int i=0;i<m;i++)
    {
        if(c[i]==' ')
        count++;
    }
    cout<<count;
}  