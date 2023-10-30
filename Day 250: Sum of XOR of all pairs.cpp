class Solution{
    public:
    long long int sumXOR(int arr[], int n)
    {
        long long int ans=0;
     for(int i=0; i<31; i++){
         long long int cntZ=0, cnt0=0;
         for(int j=0; j<n; j++){
             if(arr[j]&(1<<i))  cnt0++;
             else cntZ++;
         }
         long long int p = cntZ*cnt0;
         ans+=(1<<i)*p;
     }
     return ans;
    }
};
