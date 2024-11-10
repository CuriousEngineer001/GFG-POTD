  vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of element
        set<int> st;
        int n = a.size(), m = b.size();
        for(int i= 0 ; i < n ;i++) st.insert(a[i]);
        for(int i = 0 ; i < m ; i++) st.insert(b[i]);
        vector<int> ans(st.begin(),st.end());
        return ans;
       
    }