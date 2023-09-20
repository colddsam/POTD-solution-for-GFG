class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            int left=0, right=0, arr[16];
            d=d%16;
            for(int i=0; i<16; i++)
            {
                arr[i] = (n&1)==1 ? 1:0;
                n=n/2;
            }
            int j=0, x=(16-d)%16, y = d;
            while(j<16)
            {
                if(arr[x]==1)
                left+= 1<<j;
                
                if(arr[y]==1)
                right+=  1<<j;
                
                
                x=(x+1)%16;
                y=(y+1)%16;
                
                j++;
            }
            vector <int> res;
            res.push_back(left);
            res.push_back(right);
            
            return res;
        }
};
