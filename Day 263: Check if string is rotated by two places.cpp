class Solution
{
    public:
    bool isRotated(string str1, string str2)
    {
        int n = str1.size(), m = str2.size();
        if(n!=m) return 0;
        string s1 = str1.substr(2,n-2)+str1.substr(0,2); 
        string s2 = str1.substr(n-2,2)+str1.substr(0,n-2);
        return str2==s1||str2==s2;
    }

};
