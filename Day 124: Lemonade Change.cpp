bool lemonadeChange(int N, vector<int> &bills) {
        vector<int> f(3, 0);
        
        for(auto i : bills){
            if(i == 5)
                ++f[0];
            else if(i == 10){
                if(f[0])
                    --f[0];
                else
                    return 0;
                    
                ++f[1];
            }
            else if(i == 20){
                if(f[1] and f[0])
                    --f[0], --f[1];
                else if(f[0] > 2)
                    f[0] -= 3;
                else
                    return 0;
                    
                ++f[2];
            }
        }
        
        return 1;
    }
