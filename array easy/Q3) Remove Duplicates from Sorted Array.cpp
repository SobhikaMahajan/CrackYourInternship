class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 1 1 2 3 3 3 
        
        int l = 1;
        for(int i = 0;i<nums.size()-1;i++){
            
            if(nums[i] != nums[i+1]){        
                nums[l] = nums[i+1];   
                l++;
            }
            
        }
        return l;       
    }
};
