class Solution{
public:
    
        long long int numoffbt(long long int arr[], int n){
        // Your code goes here
        int max=arr[0];
        int min=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        int mark[max+2];
        int value[max+2];
        for(int i=0;i<max+2;i++)
        {
            mark[i]=0;
            value[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            mark[arr[i]]=1;
            value[arr[i]]=1;
        }
        int res=0;
        for(int i=min;i<=max;i++)
        {
            if(mark[i])
            {
                for(int j=2*i;j<=max&&j/i<=i;j+=i)
                {
                    if(!mark[j])
                    {
                        continue;
                    }
                    value[j]=value[j]+(value[i]*value[j/i]);
                    if(i!=j/i)
                    {
                        value[j]=value[j]+(value[i]*value[j/i]);
                    }
                }
            }
            res+=value[i]%1000000007;
        }
        return res%1000000007;
    }
};
