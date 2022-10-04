/* https://leetcode.com/problems/two-sum/ */

// using two pointer technique.
#define ll long long int
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    // copy nums data in new vector with it's indices
    vector<pair<ll,ll>>mp(nums.size());
    for(int i=0;i<nums.size();i++){
        mp[i]={nums[i],i};
    }
    //sorting the vector    
    sort(mp.begin(),mp.end());
      //declaring two pointers
     int lo=0,hi=mp.size()-1;
      while(hi-lo>0){
        //if current sum is greater than target then hi--
          if(mp[lo].first+mp[hi].first>target){
              hi--;
          }
        //if current sum is lower than target then lo++
          else if(mp[lo].first +mp[hi].first<target){
              lo++;
          }
        //if current sum is equal to target then 
          else{
              break;
          }
      }
      // returning ans vector
    vector<int>ans;
       ans.push_back(mp[lo].second);
        ans.push_back(mp[hi].second);
        return ans;
    }
};

//Time complexity->O(N*logN)
//Space complexity->O(N)
