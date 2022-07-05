class Solution {
public:
    void sortColors(vector<int>& nums) {
        // step1: Mid =0 low = 0 high = n-1      mid represents 1, low->0 and high->2
        // Step2:  check value of nums[mid]
            /*    if 0 ; swap arr[low] and arr[mid]   , low++,mid++
                  if 1; mid++
                  if2;  swap arr[high] and arr[mid]    ,high--,
            */
        
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            
            else if(nums[mid] == 1){
                mid++;
            }
            
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
