class Solution{
  public:	
    int mod = 1e9+7;
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    int n = s.length();
	    vector<long long> dp(n+1,0);
	    unordered_map<char,int> mp;
	    
	    dp[0] = 1;
	    
	    for (int i=1; i<=n; i++){
	        dp[i] = (2*dp[i-1])%mod;
	        
	        char ch = s[i-1];
	        
	        if (mp.find(ch) != mp.end()){
	            int idx = mp[ch];
	            dp[i] = (dp[i] - dp[idx-1] + mod)%mod;
	        }
	        
	        mp[ch] = i;
	    }
	    
	    return dp[n];
	}
};
