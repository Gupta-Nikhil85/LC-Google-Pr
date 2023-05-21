vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
           long long int target3=target-nums[i];
          for(int j=i+1;j<nums.size();j++){
             long long int target2=target3-nums[j];
              int low=j+1,high=nums.size()-1;
              while(low<high){
                  int sum=nums[low]+nums[high];
                  if(sum>(long)target2)high--;
                  else if(sum<target2)low++;
                  else{
                      ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                      int last_low_occurance=nums[low],last_highocc=nums[high];
                      while(low<high && nums[low]==last_low_occurance)low++;
                       while(low<high && nums[high]==last_highocc)high--;
                  }
              }
              while(j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
            }
             while (i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i; 
          }
    return ans;
}