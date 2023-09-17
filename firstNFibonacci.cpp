
class Solution
{
    public:
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> fib(n,0);
        fib[0] = 1;
        fib[1] = 1;
        
        for (int i=2; i<n; i++){
            fib[i] = fib[i-1]+fib[i-2];
        }
        return fib;
    }
};
