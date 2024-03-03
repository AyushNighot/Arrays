class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int  m = matrix.size();
        int n = matrix[0].size();

       vector<vector<int>>ans(m,vector<int>(n,0));

       vector<int> cols(n,-1);

       for( int i = 0 ; i < n ; i++) ///iterate through cols
       {
           for (int j = 0 ; j < m ;j++) ///iterate through rows
           {
               ans[j][i] = matrix[j][i];

               cols[i] = max(cols[i],matrix[j][i]);
           }
       }

       ////again traverse the answer matrix to replace it with maximum value int column

       for (int i = 0 ; i < n ; i++)
       {
           for (int j = 0 ; j < m ; j++)
           {
               if(ans[j][i] == -1)
               {
                   ans[j][i] = cols[i];
               }
           }
       }

       return ans;
    }
};
