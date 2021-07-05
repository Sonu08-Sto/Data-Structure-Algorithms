#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left,*right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};

void InorderInsert(Node *root,int arr[],int *i){
    if(root!=NULL){
        InorderInsert(root->left,arr,i);
        arr[*i]=root->key;
        *i++;
        InorderInsert(root->right,arr,i);
    }
}

Node * ConstructBST(int arr[],int start,int end){
    if(start> end)return NULL;

    int mid=(start+end)/2;
    Node *root=new Node(arr[mid]);


    root->left=ConstructBST(arr,start,mid-1);
    root->right=ConstructBST(arr,mid+1,end);

    return root;
}

int *Construct(int arr[],int brr[],int n,int m){
    int *newarray=new int[n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr[i]<=brr[j]){
            newarray[k]=arr[i];
            i++;
        }
        else{
        newarray[k]=brr[j];
        j++;
        }
        k++;
    }
    while(i<n){
         newarray[k]=arr[i];
         i++;
         j++;
    }
    while(j<m){
        newarray[k]=brr[j];
        j++;
        k++;
    }
    return newarray;
}

Node *MergeBST(Node *root,Node *root2,int n,int m){

    int *arr=new int[n];
    int i=0;
    InorderInsert(root,arr,&i);

    int *brr=new int[m];
    int j=0;
    InorderInsert(root2,brr,&j);

    int *Mergearray=Construct(arr,brr,n,m);

    return ConstructBST(Mergearray,0,n+m-1);
}

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

int main(){
     Node *root1 = new Node(100);
    root1->left     = new Node(50);
    root1->right = new Node(300);
    root1->left->left = new Node(20);
    root1->left->right = new Node(70);
 
    Node *root2 = new Node(80);
    root2->left     = new Node(40);
    root2->right = new Node(120);
 
    Node *mergedTree = MergeBST(root1, root2, 5, 3);
 
    cout << "Following is Inorder traversal of the merged tree \n";
    inorder(mergedTree);
 
    return 0;
}