
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
void sortA1ByA2(int A[], int N, int A2[], int M, int arr[])
{
    unordered_map<int, int> m;
    int inx = 0;
    for(int i=0;i<N;i++){
            m[A[i]]++;
        }
    for(int i=0;i<M;i++){
            if(m[A2[i]] != 0 )
            {
                for(int j=1;j<=m[A2[i]];j++)
                arr[inx++]=A2[i];
            }
            m.erase(A2[i]);
        }
    for(auto x:m)
        {
        
            for(int i=1;i<=x.second;i++)
            arr[inx++]=x.first;
        }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int A1[] = { 2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8 };
    int A2[] = { 2, 1, 8, 3 };
    int n = sizeof(A1) / sizeof(A1[0]);
    int m = sizeof(A2) / sizeof(A2[0]);

    int ans[n];
    sortA1ByA2(A1, n, A2, m, ans);

    cout << "Sorted array is \n";
    printArray(ans, n);

    return 0;
}