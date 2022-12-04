// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        // code here
        string a,b;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='A'||S[i]=='B')
            {
                a+=S[i];
            }
        }
        for(int i=0;i<T.length();i++)
        {
            if(T[i]=='A'||T[i]=='B')
            {
                b+=T[i];
            }
        }
        return a==b;
    }
};
