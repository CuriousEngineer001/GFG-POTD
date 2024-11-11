class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        // Code here
        sort(arr.begin(),arr.end()); // NlogN
        int cnt =0;
        // O(N)
        for(int i =1 ; i < arr.size(); i++){
            if( arr[i-1] >= arr[i]){
                int inc = arr[i-1] - arr[i] + 1;
                arr[i] = arr[i] + inc;
                cnt += inc;
            }
        }
        return cnt;
        
        // TC= O(NlogN) + O(N) == O(NlogN)
    }
};