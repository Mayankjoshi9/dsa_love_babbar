class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int size=nums.size();
        int high=size-1;
        while(low<=high){
            int mid=low +(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(  nums[low]> target){
                if(nums[low]<=nums[mid] || nums[low]>nums[mid] && nums[mid]<nums[target]  ){
                    low=mid+1;
                }
                else if(nums[low]>nums[mid] && target<nums[mid]){
                    high=mid-1;
                }
            }
            else{
                if((nums[low]<nums[mid] && target<nums[mid]) || nums[low]>nums[mid]){
                    high=mid-1;
                }
                else if(nums[low]<nums[mid] && target>nums[mid]){
                    low=mid+1;
                }
            }
        }
    }
};