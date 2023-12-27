class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        int n = matrix.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        
        queue<pair<int,int>> q;
        q.push({0,0});
        vis[0][0] = 1;
        
        vector<int> ans;
        
        while (q.empty() == false) {
            auto front = q.front();
            q.pop();
            int row = front.first;
            int col = front.second;
            
            ans.push_back(matrix[row][col]);
            if (col+1 < n && vis[row][col+1] == 0) {
                q.push({row,col+1});
                vis[row][col+1] = 1;
            }
            if (row+1 < n && vis[row+1][col] == 0) {
                q.push({row+1,col});
                vis[row+1][col] = 1;
            }
        }
        return ans;
    }
};
