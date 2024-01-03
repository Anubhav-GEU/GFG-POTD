class Solution {
  public:
  const int MAX_CHARACTERS = 3;
    int smallestSubstring(string S) {
        // Code here
        int n = S.length();
        vector<int> count(MAX_CHARACTERS, 0);
        int minLength = INT_MAX;
    
        int st = 0;
    
        for (int i = 0; i < n; ++i) {
            ++count[S[i] - '0'];
    
            while (st < i && count[S[st] - '0'] > 1) {
                --count[S[st] - '0'];
                ++st;
            }
    
            if (count['0' - '0'] > 0 && count['1' - '0'] > 0 && count['2' - '0'] > 0) {
                minLength = min(minLength, i - st + 1);
            }
        }
    
        return minLength == INT_MAX ? -1 : minLength;
    }
};
