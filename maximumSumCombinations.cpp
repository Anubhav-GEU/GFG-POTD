class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
        vector<int> ans;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        priority_queue<pair<int,pair<int,int>>> pq;
        set<pair<int,int>> st;
        
        pq.push({A.back()+B.back(),{N-1,N-1}});
        st.insert({N-1,N-1});
        
        while (K--){
            auto p = pq.top();
            int sum = p.first;
            int i = p.second.first;
            int j = p.second.second;
            
            ans.push_back(sum);
            
            pq.pop();
            
            if (st.find({i-1,j}) == st.end()){
                pq.push({A[i-1]+B[j],{i-1,j}});
                st.insert({i-1,j});
            }
            if (st.find({i,j-1}) == st.end()){
                pq.push({A[i]+B[j-1],{i,j-1}});
                st.insert({i,j-1});
            }
        }
        return ans;
    }
};
