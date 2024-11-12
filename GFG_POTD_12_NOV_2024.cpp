class Solution {
  public:
   static bool cmp(vector<int> & a, vector<int> & b){
       return a[1] < b[1];
   }
    bool canAttend(vector<vector<int>> &arr) {
        // Your Code Here
       
        sort(arr.begin(),arr.end(), cmp);
        // O(NlogN)
        for(int i =1; i < arr.size(); i++){
            if(arr[i-1][1] > arr[i][0]) return false;
        }
        
        return true;
        
        
    }
    };