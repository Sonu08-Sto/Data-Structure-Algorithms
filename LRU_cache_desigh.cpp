#include<iostream>
#include<unordered_map>
using namespace std;

struct Node{
	int key;
	int value;
	Node *next;
	Node *prev;
	Node(int x,int y){
		key=x;
		value=y;
		next=prev=NULL;
	}
};

class LRUCache{
	public:
	unordered_map<int,Node *> map;
	int capacity,count;
	Node *head,*tail;
	LRUCache(int x){
		capacity=x;
		count=0;
		head=new Node(0,0);
		tail=new Node(0,0);
		head->next=tail;
		tail->prev=head;
		head->prev=NULL;
		tail->next=NULL;
	}

	void Deletee(Node * node){
		node->prev->next=node->next;
		node->next->prev=node->prev;
	}

	void addtoHead(Node *node){
		node->next=head->next;
		node->next->prev=node;
		node->prev=head;
		head->next=node;
	}

	int get(int key){
		if(map[key]!=NULL)
		{
			Node *node=map[key];
			int result=node->value;
			Deletee(node);
			addtoHead(node);
			return result;
		}
		return -1;
	}

	void set(int key,int value){
		if(map[key]!=NULL){
			Node *node=map[key];
			node->value=value;
			Deletee(node);
			addtoHead(node);
		}
		else{
			Node *node=new Node(key,value);
			map[key]=node;
			if(count<capacity){
				count++;
				addtoHead(node);
			}
			else{
				map.erase(tail->prev->key);
				Deletee(tail->prev);
				addtoHead(node);
			}
		}
	}
};

int main(){

		LRUCache cache(2); 

		cache.set(1, 10); 

		cache.set(2, 20); 
		cout<<"Value for the key: 1 is " << cache.get(1)<<endl; 
		cache.set(3, 30); 

		cout<<"Value for the key: 2 is " << 
				cache.get(2)<<endl; 
		cache.set(4, 40); 
		cout<<"Value for the key: 1 is " << 
			cache.get(1)<<endl;
		cout<<"Value for the key: 3 is " << 
						cache.get(3)<<endl; 
		cout<<"Value for the key: 4 is " << 
						cache.get(4)<<endl;
						
		return 0;
}