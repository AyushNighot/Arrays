class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        int n = apple.size();
        int m = capacity.size();
        int sum = 0;
        int count = 0;
        for (int i  = 0 ; i < n ; i++)
        {
            sum += apple[i];
        }
        
        
        sort(capacity.begin(),capacity.end(),greater<int>());
        
        for (int i = 0 ; i < m ; i++)
        {
            sum -= capacity[i];
            count++;
            
            if( sum <= 0)
            {
                return count;
            }
        }
        return count;
    }
};
