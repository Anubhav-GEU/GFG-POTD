class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here  
        long long num = n;
        if(num==0){
            return false;
        }
        
        while(num>1){
            if(num%2 != 0){
                return false;
            }
            num = num/2;
        }
        return true;


    }
};
