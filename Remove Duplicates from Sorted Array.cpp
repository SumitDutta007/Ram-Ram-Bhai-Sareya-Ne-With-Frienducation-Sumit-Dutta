int removeDuplicates(vector<int>& nums) {
        int k =1, n=nums.size();
        for(int i=1 ; i<n ; i++){
            if(nums[i] != nums[i-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;

    }