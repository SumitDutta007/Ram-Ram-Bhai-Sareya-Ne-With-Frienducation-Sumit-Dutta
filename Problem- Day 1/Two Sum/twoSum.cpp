vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for(int i=0 ; i < nums.size() ; i++)
    {
        if( mp.find(target-nums[i]) == mp.end()){
            mp[nums[i]] = i;
        }
        else {
            for(auto it:mp){
                cout<< it.first << " " << it.second<<endl;
            }
            return {mp[target-nums[i]],i};
        }
    }
    return {};
}