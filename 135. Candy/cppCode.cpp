//Link to the problem :- https://leetcode.com/problems/candy/description/

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int peak=0,up=0,down=0,ans=1;
        for(int i=1; i<n; i++){
            if(ratings[i]>ratings[i-1]){
                up++;
                peak=up;
                down=0;
                ans+=up+1;
            }
            else if(ratings[i]<ratings[i-1]){
                down++;
                up=0;
                if(peak>=down) ans+=down;
                else ans+=down+1;
            }else{
                up=peak=down=0;
                ans++;
            }
        }
        return ans;
    }
};