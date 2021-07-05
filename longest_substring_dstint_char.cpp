#include <iostream>
#include <vector>
using namespace std;

int Longest(string str)
{
    int n = str.length();
    vector<int> v(256, -1);
    int i = 0,res = 0;
    for (int j = 0; j < n; j++)
    {
        i = max(i, v[str[j]] + 1);
        int mx = j - i + 1;
        res = max(res, mx);
        v[str[j]] = j;
    }
    return res;
}

int main()
{
    string str = "aaa";
    cout << Longest(str);
    return 0;
}