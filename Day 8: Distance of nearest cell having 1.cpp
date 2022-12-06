vector<vector<int>>nearest(vector<vector<int>>grid)
	{   // Code here
	    int row=grid.size();
	    int col=grid[0].size();
        vector<vector<int>> res(row,vector<int>(col,INT_MAX));
	    queue<pair<int,int>> q;
	    for(int i=0;i<row;i++)
	    {
	        for(int j=0;j<col;j++)
	        {
	            if(grid[i][j]==1)
	            {
	                res[i][j]=0;
	                q.push({i,j});
	            }
	        }
	    }
	    while(!q.empty())
	    {
	        int i=q.front().first;
	        int j=q.front().second;
	        if((i-1)>=0 and res[i][j]+1 < res[i-1][j])
	        {
	            res[i-1][j]=res[i][j]+1;
	            q.push({i-1,j});
	        }
	        if((j-1)>=0 and res[i][j]+1 < res[i][j-1])
	        {
	            res[i][j-1]=res[i][j]+1;
	            q.push({i,j-1});
	        }
	        if((i+1)<row and res[i][j]+1 < res[i+1][j])
	        {
	            res[i+1][j]=res[i][j]+1;
	            q.push({i+1,j});
	        }
	        if((j+1)<col and res[i][j]+1 < res[i][j+1])
	        {
	            res[i][j+1]=res[i][j]+1;
	            q.push({i,j+1});
	        }
	        q.pop();
	    }
	    return res;
	}
