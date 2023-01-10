int sum(Node *node)
    {
        if(node==NULL)
        {
            return 0;
        }
        else
        {
            return node->data+sum(node->left)+sum(node->right);
        }
    }
    void toSumTree(Node *node)
    {
        if(node==NULL)
        {
            return;
        }
        else
        {
            node->data=sum(node->left)+sum(node->right);
            toSumTree(node->left);
            toSumTree(node->right);
        }
        
    }
