// Dutch National flag Algo
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,h=nums.size()-1;
        //until 
        while(m<=h){
            //if zero, we'll swap it to the lth element
            if(nums[m]==0){
                swap(nums[m++],nums[l++]);
            }
            //if one, we'll skip it
            else if(nums[m]==1){
                m++;
            }
            //if two, we need to place it to the end
            else if(nums[m]==2){
                swap(nums[m],nums[h--]);
            }
        }   
        
    }
};
// Counting sort --------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int one=0;
        int two =0;
        //taking count of zero, ones, twos
        for(auto it: nums){
            if(it==0){
                zero++;
            }
            else if(it==1){
                one++;
            }
            else{
                two++;
            }
        }
        for(auto &it: nums){
            if(zero>0){
                it=0;
                zero--;
            }
            else if(one>0){
                it=1;
                one--;
            }
            else if(two>0){
                it=2;
                two--;
            }
            
        }
    }
};
