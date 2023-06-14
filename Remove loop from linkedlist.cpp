class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
          Node* slow=head;
        Node* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                break;
            }
        }
        if(slow==head){
            while(fast->next!=slow){
                fast=fast->next;
            }
            fast->next=NULL;
        }
        else if(slow==fast)
        {
        slow=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=NULL;
        }
       
    }
};
