void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int reversed_elements_count = nums.size()-k;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }