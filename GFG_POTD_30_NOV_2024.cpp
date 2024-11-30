   bool areAnagrams(string& s1, string& s2) {
        // Your code here
        int n = s1.size(), m = s2.size();
        if(n != m) return false;
        int hash[26] ={0};
        for(int i = 0 ; i < n ; i++){
            hash[s1[i] - 'a']++;
            hash[s2[i] - 'a']--;
        }
        for(int i = 0 ; i< 26;i++){
            if(hash[i] != 0) return false;
        }
        return true;
        
    }