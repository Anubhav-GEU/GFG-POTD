class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> ans;
        for (int i=0; i<n; i++){
            int idx = arr[i]%n;
            arr[idx] += n;
        }
        
        for (int i=0; i<n; i++){
            if ((arr[i]/n) >= 2){
                ans.push_back(i);
            }
        }
        if (ans.size() == 0) return {-1};
        else return ans;
    }
};
