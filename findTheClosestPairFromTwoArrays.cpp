class Solution{
  public:
    vector<int> printClosest(int ar1[], int ar2[], int n, int m, int x) {
        //code here
        int l = 0;
        int r = m-1;
        
        int mini = INT_MAX;
        int resl,resr;
        while (l<n && r>=0){
            if (abs(ar1[l] + ar2[r] - x) < mini){
                resl = l;
                resr = r;
                mini = abs(ar1[l] + ar2[r] - x);
            }
            if (ar1[l] + ar2[r] > x){
                r--;
            }
            else{
                l++;
            }
        }
        return {abs(ar1[resl]+ar2[resr])};
    }
};
