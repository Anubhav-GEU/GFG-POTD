class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
            size_t found = txt.find(pat);
            if (found == string::npos) {
                return {-1};
            }
            int n = txt.length();
            vector<int> ans;
            ans.push_back(found+1);
            for (int i=0; i<n; i++) {
                found = txt.find(pat,found+1);
                if (found != string::npos){
                    ans.push_back(found+1);
                }
                else {
                    break;
                }
            }
            return ans;
        }
     
};
