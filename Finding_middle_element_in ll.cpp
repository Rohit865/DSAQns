class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        if(head->next==NULL){
            return head->data;
        }
          int cnt=1;
          Node* temp=head;
          while(temp->next!=NULL){
              temp=temp->next;
              cnt++;
          }
         
          if(cnt%2==0){
               Node* temp=head;
              for(int i=0;i<cnt/2;i++){
                  temp=temp->next;
              }
              return temp->data;
          }
          else{
               Node* temp1=head;
              for(int i=1;i<cnt/2+1;i++){
                  temp1=temp1->next;
              }
              return temp1->data;
          }
    }
};
