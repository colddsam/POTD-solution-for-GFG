class Solution {

  public:

    int isPerfectNumber(long long N) {

        // code here

        

        long long sum=1;

        

        for(long long i=2;i<=sqrt(N);i++){

            

            if(!(N%i)){

                if(i*i!=N) sum+=(i+N/i);

                if(i*i==N) sum+=i;

            }

            

        }

        if(sum^N || !(N^1)) return 0;

        return 1;

    }

};

