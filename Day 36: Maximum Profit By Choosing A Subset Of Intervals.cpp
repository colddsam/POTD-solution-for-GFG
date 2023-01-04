int maximum_profit(int n, vector<vector<int>> &intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int>& a,vector<int>& b){
            return a[1]!=b[1]?a[1]<b[1]:(a[0]!=b[0]?a[0]<b[0]:a[2]>b[2]);
        });
        map<int,int> profits;  
        
        profits[-1]=0;
        
        for(auto& interval: intervals){
            
            int s=interval[0],e=interval[1],p=interval[2];
            
            int mxProfit=max((prev(profits.upper_bound(e)))->second,
            (prev(profits.upper_bound(s)))->second+p);
            profits[e]=mxProfit;
        }
        return profits.rbegin()->second;
    }
