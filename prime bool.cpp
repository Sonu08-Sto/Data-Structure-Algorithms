#include<iostream>
using namespace std;
bool prime(int n){
        if(n<=1)
        return false;

        for(int i = 2; i < n; i++)
            if(n % i == 0)
                return false;
        
        return true;  
}
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    bool number=prime(n);
    if(number)
        cout<<" prime";
    else 
        cout<<" not prime";
    return 0;
}