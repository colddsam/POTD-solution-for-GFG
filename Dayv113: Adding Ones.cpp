public:
    void update(int a[], int n, int update[], int k)
    {
          //   N*K
        //  for(int i=0; i<k; i++)
        //  {
        //      for(int j= update[i]-1 ;j<n ;j++)
        //      a[j]++;
        //  }
         
         // O(k+N)
        for(int i=0; i<k; i++)
        a[update[i]-1]++;
        
          for(int i=1; i<n; i++)
            a[i]+=a[i-1];
    }
