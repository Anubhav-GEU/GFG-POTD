//  Approach 1
class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int counter = 1;
        while (n != 1){
            if (n%2 == 0) counter++;
            else break;
            n /= 2;
        }
        
        return counter;
    }
};


// Approach 2

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int counter = 1;
        int mask = 1;
        while (n){
            if (n&mask) return counter;
            n >>= 1;
            counter += 1;
        }
        
        return 0;
    }
};
