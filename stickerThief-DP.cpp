// ------------------------------------------------- Recursive---------------------------------------------------------------
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int findSum(int arr[] , int idx){
        if (idx == 0) return arr[0];
        
        int nP = findSum(arr,idx-1);
        
        int P = arr[idx];
        
        if (idx > 1){
            P += findSum(arr,idx-2);
        }
        return max(nP,P);
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        return findSum(arr,n-1);
    }
};

// ------------------------------------------------------------------Iterative approach -----------------------------------------------
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        
        vector<int> dp(n,0);
        dp[0] = arr[0];
        for (int idx=1; idx<n; idx++){
            int nP = dp[idx-1];
        
            int P = arr[idx];
            
            if (idx > 1){
                P += dp[idx-2];
            }
            dp[idx] = max(nP,P);
        }
        return dp[n-1];
    }
};
