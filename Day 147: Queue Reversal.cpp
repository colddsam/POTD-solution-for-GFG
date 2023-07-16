public:
    queue<int> rev(queue<int> q)
    {
          helper(q);
     	return q;// add code here.
    }
    
     void helper(queue<int>& q)
    {
        // base case
        if (q.size() == 0)
            return ;
     //store the ele
        int x = q.front();
        q.pop();
    // recur
         helper(q);
        //  push the ele back
        q.push(x);
    }
