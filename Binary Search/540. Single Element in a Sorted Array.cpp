
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int l=0;int r=nums.size()-1;
        
        // check for boundary
        if(r==0) return nums[0];
        else if(nums[0]!=nums[1]){
            return nums[0];
        }
        else if(nums[r]!=nums[r-1]){
            return nums[r];
        }
        
        
        while(l<=r){
            
            int m=(l+r)/2;
        
            if((nums[m]!=nums[m-1]) && (nums[m]!=nums[m+1]))
                return nums[m];
            
            if((nums[m]==nums[m-1] && m%2==1) || (nums[m]==nums[m+1] && m%2==0 ))
                l=m+1;
            else
                r=m-1;
            
            }
        
      // it'll never get returned
        return 1;
    }
};
