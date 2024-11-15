int getSecondLargest(vector<int> &arr) {
        // Code Here
        int largest = arr[0], secLargest = -1;
        int n = arr.size();
        //O(N) + O(1)
        for(int i = 1; i < n ; i++){
            if(arr[i] > largest){
                secLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > secLargest && arr[i] != largest){
                secLargest = arr[i];
            }
    }
    return secLargest;
    }