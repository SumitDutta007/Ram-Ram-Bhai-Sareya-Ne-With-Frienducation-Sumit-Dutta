void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int l=0;
    for(int i=0 ; i<m ; i++){
        if(l<n && nums1[i]>nums2[l]){
            int temp = nums1[i];
            nums1[i] = nums2[l];
            nums2[l] = temp;
            sort(nums2.begin(),nums2.end());
        }
    }
    for(int i=m ; i<m+n ; i++){
        nums1[i] = nums2[i-m];
    }
}