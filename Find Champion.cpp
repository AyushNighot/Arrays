class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        vector <int> ans;
        int n = grid.size();
        

        for ( int i = 0 ; i < n ; i++)
        {
            bool isCampion = true;
            for (int j = 0 ; j < n ; j++)
            {
                if( i != j && grid[j][i] == 1)
                {
                    isCampion = false;
                    break;
                }
            }
           if(isCampion)
           {
               return i;
           }
        }
        return -1;
    }
};
