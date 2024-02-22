class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();

        for(int i = 0 ; i < size - 1; i++)
        {
            for (int j = i + 1 ; j < size ; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for (int i = 0 ; i < size ; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
