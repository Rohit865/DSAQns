class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           
           int cnt=1;
          Node* temp=head;
          while(temp->next!=NULL){
              temp=temp->next;
              cnt++;
          }
          if(cnt<n){
              return -1;
          }
        Node*curr=head;
        cnt=cnt-n;
        for(int i=0;i<cnt;i++){
            curr=curr->next;
        }
        return curr->data;
    }
};
