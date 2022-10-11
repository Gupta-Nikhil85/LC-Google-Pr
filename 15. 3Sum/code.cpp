class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        
         sort(a.begin(), a.end());

                int lo = 0, hi = 0, sum = 0;
                vector<vector<int>> res;

                int n = a.size();

                for (int i = 0; i < n - 2; i++)
                {

            if(i==0 || (i>0 and a[i]!=a[i-1]))
        {
                        lo = i + 1;
                        hi = n - 1;
                        sum=0-a[i];
                        while (lo < hi)
                        {
                            if ((a[lo] + a[hi]) == sum)
                            {
                                vector<int> temp;
                                temp.push_back(a[i]);
                                temp.push_back(a[lo]);
                                temp.push_back(a[hi]);

                                res.push_back(temp);

                                while (lo < hi and a[lo] == a[lo + 1])
                                    lo++;
                                while (lo < hi and a[hi] == a[hi - 1])
                                    hi--;
                                
                                lo++;
                                hi--;
                            }
                            else if (a[lo] + a[hi] < sum)
                                lo++;
                            else
                                hi--;
                        }
            
            
             
        }
                   
                }
         return res;
                
    }
            };
        
