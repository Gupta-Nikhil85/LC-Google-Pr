// Link to the problem:- https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int n=height.size();
        for(int i=0;i<n;i++){
            int left=0,right=0;
            int j=i;
            while(j>=0){
                left=max(left,height[j]);
                j--;
                }
            j=i;
            while(j<n){
                right=max(right,height[j]);
                j++;
            }
            ans+= (min(left,right)-height[i]);
        }
        return ans;
    }
};