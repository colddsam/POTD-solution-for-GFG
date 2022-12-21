if(!head || !(head->next))
            return head;
        
        Node *current=head->next;
        Node *previous=head;
        Node *front=head;
        
        while(current){
            if((current->data)<0){
                while(current && (current->data)<0){ 
                    previous->next=current->next;
                    current->next=front;
                    front=current;
                    current=previous->next;
                }
            }
            if(current){
                current=current->next;
                previous=previous->next;
            }
        }
        return front;
