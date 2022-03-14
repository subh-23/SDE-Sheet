class Solution {
public:
  // this is the XOR approch, there is another one efficient approach using SUM Formula
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        //taking first XOR
        int first=0;
        for(int i=0;i<=n;i++){
            first^=i;
        }
        //taking 2nd XOR
        int second=0;
        for(auto it: nums){
            second^=it;
        }
        return first^second;
    }
};
