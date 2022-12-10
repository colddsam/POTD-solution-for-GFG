 stack<char> st;
    st.push(num[0]);
    int n=num.length();
    for(int i=1;i<n;++i)
    {
        while(!st.empty() && st.top()>num[i] && k>0)
        {
            st.pop();
            --k;
        }
        st.push(num[i]);
    }
    while(k>0)
    {
        st.pop();
        --k;
    }
    string ans = "";
    while(!st.empty())
    {
        ans=st.top()+ans;
        st.pop();
    }
    int lz=-1;
    for(int i=0;i<ans.length();++i)
    {
        if(ans[i]!='0')
        {
            break;
        }
        lz=i;
    }
    if(lz==ans.length()-1)
    {
        return "0";
    }
    if(lz>=0)
    {
        return ans.substr(lz+1);
    }
    return ans;
