void arrange(long long arr[], int n) {
        // Your code here
        for(int i = 0; i <n ;i ++)
        {
          
            arr[i] += (arr[(int)arr[i]]%n)*n;    
            // for the next iteration , we want the old values again for computation of arr[i],
            // and for the retireval of old value we use %n as shown above
        }
        
         for(int i = 0; i <n ;i ++)
         arr[i] /= n;
    }
