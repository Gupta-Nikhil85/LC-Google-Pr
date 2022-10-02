//Link to the question: https://leetcode.com/problems/minimum-path-sum/

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size();
    int column=grid[0].size();
    int sum=0;
    for(int i=0;i<column;i++) {	
		sum+=grid[0][i];    //Filling the first row ,only movement in right is possible here
        grid[0][i]=sum;
        }
    sum=0;
    for(int i=0;i<row;i++) {                                            
        sum+=grid[i][0]; //Filling the first column ,only movement in downward direction  
        grid[i][0]=sum;
        }
    for(int i=1;i<row;i++)
		{
        for(int j=1;j<column;j++)
		{                                                                            
        grid[i][j]=min(grid[i-1][j],grid[i][j-1])+grid[i][j];//Filling the remaining cells using the minimum value and adding to the current cell value   
        }
    }
    return grid[row-1][column-1];  //Return the last grid
        
    }
};
