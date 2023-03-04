long long countSubarrays(vector<int>& nums, int minK, int maxK){
  int n=nums.size();
  int count=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      auto min_it = min_element(nums.begin()+i, nums.begin()+j+1);
      auto max_it = max_element(nums.begin()+i, nums.begin()+j+1);
      if(min_it != nums.end() && max_it != nums.end() && *min_it == minK && *max_it == maxK)
        count++;
    }
  }
  return count;
}
