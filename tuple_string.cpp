#include<iostream>
#include<string>
#include<tuple>
using namespace std;

int main()
{
    tuple<string,int,int> t1=make_tuple("Akash",07,40);
    tuple<string,int,int> t2=make_tuple("Ajay",06,45);
    cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<" "<<endl;
    cout<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2)<<" "<<endl;
    char c;
    int a,b;
    tie(ignore,a,b)=t1;
    cout<<c<<" "<<a<<" "<<b<<endl;
    cout<<tuple_size<decltype(t1)> :: value<<endl;
    auto t3=tuple_cat(t1,t2);
    cout<<get<0>(t3)<<" "<<get<1>(t3)<<" "<<get<2>(t3)<<" "<<get<3>(t3)<<" "<<get<4>(t3)<<" "<<get<5>(t3)<<" "<<endl;
}