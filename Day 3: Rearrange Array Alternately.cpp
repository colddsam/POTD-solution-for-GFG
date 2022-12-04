class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int high_id=n-1;
    	int low_id=0;
    	int max=arr[n-1]+1;
    	for(int i=0;i<n;i++)
    	{
    	    if(i%2==0)
    	    {
    	        arr[i]=(arr[high_id]%max)*max+arr[i];
    	        high_id--;
    	    }
    	    else
    	    {
    	        arr[i]=(arr[low_id]%max)*max+arr[i];
    	        low_id++;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	{
    	    arr[i]=arr[i]/max;
    	}
    	 
    }
};
