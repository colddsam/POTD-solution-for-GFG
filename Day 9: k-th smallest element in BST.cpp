int count=0;
    Node* check(Node *root,int K)
    {
        if(root==NULL)
        {
            return NULL;
        }
        Node* left=check(root->left,K);
        if(left!=NULL)
        {
            return left;
        }
        count++;
        if(count==K)
        {
            return root;
        }
        return check(root->right,K);
    }
    int KthSmallestElement(Node *make, int n) {
        // add code here.
        Node *temp=check(make,n);
        if(temp==NULL)
        {
            return -1;
        }
        else
        {
            return temp->data;
        }
    }
