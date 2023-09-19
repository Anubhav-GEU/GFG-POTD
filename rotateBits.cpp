class Solution
{
  public:
        // int size = 16;
        vector <int> rotate (int n, int d)
        {
            //code here.
            d = d%16;
            unsigned short right  = (n >> d)|(n << (16 - d));
            unsigned short left = (n << d) | (n >> (16 - d));
            
            return {left,right};
        }
};
