#include<iostream>
using namespace std;

void printSub(string s,string crr,int i)
{
        if(i==s.length())
        {
            cout<<"{"<<crr<<"}"<<" ";
            return;
        }
        printSub(s,crr,i+1);
        printSub(s,crr+s[i],i+1);
}

int main() {
	
	string str = "ABC";
    	
    printSub(str, "", 0);
	
	return 0;
}