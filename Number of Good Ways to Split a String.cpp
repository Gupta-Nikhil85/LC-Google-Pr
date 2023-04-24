// Link to the problem:- https://leetcode.com/problems/number-of-good-ways-to-split-a-string/

//copy paste your code from the leetcode's console.
class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        vector<int> cntf(n), cntb(n);
        cntb[n-1] = 1;
        cntf[0] = 1;
		
		
		
        mp[s[0]]++;
        for(int u=1;u<n;u++){
            if(!mp[s[u]]) 
                cntf[u] = cntf[u-1]+1;
            else 
                cntf[u] = cntf[u-1];
            mp[s[u]]++;
        }
        mp.clear();
		
		
		
        mp[s[n-1]]++;
        for(int u=n-2;u>=0;u--){
            if(!mp[s[u]]) 
                cntb[u] = cntb[u+1]+1;
            else 
                cntb[u] = cntb[u+1];
            mp[s[u]]++;
        }
        int c = 0;
        if(cntf[n-1]==1) 
            return n-1;
		
		
		
        for(int u=0;u<n-1;u++){
            if(cntf[u]==cntb[u+1])
                c++;
        }
		
        return c;
    }
};
