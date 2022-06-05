class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int a = 0; a<nums.size(); a++){
            if(nums[a]!=0){
                i++;
            }
            else{
                for(int j = i+1 ; j<nums.size();j++){
                    if(nums[j] !=0 ){
                        nums[i] = nums[j];
                        nums[j] = 0;
                        i++;
                    }
                }
            }
        }
    }
};
