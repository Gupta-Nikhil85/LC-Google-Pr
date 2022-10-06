// Link to the question:-  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int l = 0, h = nums.size()-1;
        int start=-1, end=-1;
        while(l <= h)
        {
            int mid = (l+h)>>1;
            if(nums[mid] == target){
               int temp = mid;
                while(mid > 0 && nums[mid-1] == target)
                    mid--;
                start = mid;
                while(temp < nums.size()-1 && nums[temp+1] == target)
                    temp++;
                end = temp;
                
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }
            else if(nums[mid] > target)
                h = mid-1;
            else
                l = mid+1;
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};