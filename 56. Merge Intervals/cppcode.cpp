// Link to the question:- https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i=0;i<arr.size();i++){
           if(ans.empty()||ans[ans.size()-1][1]<arr[i][0]){
               ans.push_back({arr[i][0],arr[i][1]});
           }
            else{
                ans[ans.size()-1][1]=max(ans[ans.size()-1][1],arr[i][1]);
            }
        }
        return ans;
    }
};