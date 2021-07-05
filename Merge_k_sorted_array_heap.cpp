#include<bits/stdc++.h>
using namespace std;

struct Triplet{
    int val,apos,vpos;
    Triplet(int v,int ap,int vp){
        val=v;
        apos=ap;
        vpos=vp;
    }
};

struct MyCmp{
    bool operator()(Triplet &t1,Triplet &t2){
        return t1.val>t2.val;
    }
};

vector<int> MergeKth(vector<vector<int>> &v){
    vector<int> res;
    priority_queue<Triplet,vector<Triplet>,MyCmp> pq;
    for(int i=0;i<v.size();i++){
        Triplet t(v[i][0],i,0);
        pq.push(t);
    }
    while(pq.empty()==false){
        Triplet curr=pq.top();
        pq.pop();
        res.push_back(curr.val);
        int ap=curr.apos;
        int vp=curr.vpos;
        if(vp+1<v[ap].size()){
            Triplet t1(v[ap][vp+1],ap,vp+1);
            pq.push(t1);
        }
    }
    return res;
}

int main(){
   vector<vector<int>> v={{10,20,30},
                          {5,15},
                          {1,9,11,18}};

    vector<int> result=MergeKth(v);
    for(auto x:result)
    cout<<x<<" ";
}