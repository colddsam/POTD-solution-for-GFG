Node *removeDuplicates(Node *head)
{
    Node * prev = nullptr;
    Node * cur = head;
    
    while(cur != nullptr){
        Node * todelete = nullptr;
        
        if(prev != nullptr){
            if(prev -> data == cur -> data){
                prev -> next = cur -> next;
                todelete = cur;
            }
            else{
                prev = cur;
            }
        }
        else{
            prev = cur;
        }
        
        cur = cur -> next;
        
        if(todelete != nullptr)
            delete(todelete);
    }
    
    return head;
}
