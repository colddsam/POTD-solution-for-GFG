/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public:
    Node* rev(Node* make)
        {
            Node* curr=make;
            Node *pre=NULL,*nex=NULL;
            while(curr!=NULL)
            {
                nex=curr->next;
                curr->next=pre;
                pre=curr;
                curr=nex;
            }
            make=pre;
            return make;
        }
    void reorderList(Node* head) {
        // Your code here
        Node* s=head;
        Node* f=head->next;
        while(f and f->next)
        {
            s=s->next;
            f=f->next->next;
        }
        Node* tak=s->next;
        s->next=NULL;
        Node* sec=rev(tak);
        Node* fir=head;
        while(sec)
        {
            Node* temp1=fir->next;
            Node* temp2=sec->next;
            fir->next=sec;
            sec->next=temp1;
            fir=temp1;
            sec=temp2;
        }
    }
};
