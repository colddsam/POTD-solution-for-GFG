#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class Solution{
    public:
    string rearrange (string s, int n)
    {
        // your code here
        vector<int>a(26,0),b(26,0);
        int cv=0;
        int cc=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                a[s[i]-'a']++;
                cv++;
            }
            else
            {
                b[s[i]-'a']++;
                cc++;
            }
        }
        int i=0,j=0;
        while(i<26 && !a[i])
        {
            i++;
        }
        while(j<26 && !b[j])
        {
            j++;
        }
        if(cv==cc)
        {
            if(j<i)
            {
                swap(a,b);
                swap(j,i);
            }
        }
        else if(cv-cc==1)
        {
            
        }
        else if(cc-cv==1)
        {
            swap(a,b);
            swap(j,i);
        }
        else
        {
            return "-1";
        }
        int size=n;
        if(size%2)
        {
            size--;
        }
        for(int m=0;m<size;m++)
        {
            s[m]=i+'a';
            m++;
            s[m]=j+'a';
            a[i]--;
            b[j]--;
            while(!a[i])
            {
                i++;
            }
            while(!b[j])
            {
                j++;
            }
            
        }
        if(n%2)
        {
            s[n-1]=i+'a';
        }
        return s;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.rearrange(S,N)<<endl;
    }
    return 0;
}
