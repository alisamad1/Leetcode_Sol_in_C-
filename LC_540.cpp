int singleNonDuplicate(vector<int>& nums) {
    int l = 0;
    int r = nums.size() - 1;
    while(l<r){
        int mid = l+(r-l)/2;
        if(mid % 2 == 0){
            if(nums[mid] == nums[mid+1]){
                l = mid + 2;
            }
            else if (nums[mid] == nums[mid-1]){
                r = mid - 2;
            }
            else{
                return nums[mid];
            }
        }
        else{
            if(nums[mid] == nums[mid-1]){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
    }
    return nums[l];
}