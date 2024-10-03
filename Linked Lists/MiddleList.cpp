#include<bits/stdc++.h>
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        Node*curr=head;
        int n=0;
        while(curr!=nullptr){
            n++;
            curr=curr->next;
        }
        curr=head;
        int middle=n/2;
        
        for(int i=0;i<middle;i++){
           
            curr=curr->next;
            
        }
        return curr->data;
    }
};
