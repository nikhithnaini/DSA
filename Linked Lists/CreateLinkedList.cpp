#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
void insert(int n,Node*&head){
    if(head==nullptr){
        head= new Node(n);
        
    }
    else{
        Node*temp=head;
        while(temp->next!=nullptr){
            
            temp=temp->next;
        }
        temp->next=new Node(n);
    }
};
int main() {
	// your code goes here
	Node*head=nullptr;
	int val,n;
	cout<<"total umbers"<<endl;
	cin>>val;
	for(int i=0;i<val;i++){
	   cin>>n;
	   insert(n,head);
	}
	Node*print=head;
	while(print->next!=nullptr){
	    cout<<print->data<<endl;
	    print=print->next;
	}
return 0;
}
