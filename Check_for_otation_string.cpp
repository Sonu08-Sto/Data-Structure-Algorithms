#include<iostream>
using namespace std;

bool Check(string txt,string std){
    if(txt.length()!=std.length())
    return false;
    return ((txt+txt).find(std)!=string::npos);
}

int main(){
    string str="ABCD";
    string str2="CDAB";
    cout<<Check(str,str2);
    return 0;
}