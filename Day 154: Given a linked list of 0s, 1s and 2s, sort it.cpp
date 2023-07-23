Node* segregate(Node *head) {
        
        // Add code here
        int z=0,o=0,t=0;
        Node* temp=head;
        while(temp){
            if(temp->data==0)z++;
            else if(temp->data==1)o++;
            else t++;
            temp=temp->next;
        }
        temp=head;
        while(temp){
            if(z){
                temp->data=0;
                z--;
            }
            else if(o){
                temp->data=1;
                o--;
            }
            else temp->data=2;
            temp=temp->next;
        }
        return head;
    }
