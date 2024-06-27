int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i]==nums[i-1]){
                if(count<1) count++;
                else{
                    nums.erase(nums.begin()+i);
                    i--;
                }
            }
            else count = 0;
        }
        return nums.size();
    }