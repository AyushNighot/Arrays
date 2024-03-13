class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>freq;
        for(int i = 0 ; i < n ; i++)
        {
            freq.insert(nums[i]);
        }

        int distinct = freq.size();
        int ans =0;

        for (int i = 0 ; i < n ; i++)
        {
            unordered_set<int> current;

            for (int j = i ; j < n ; j++)
            {
                current.insert(nums[j]);
                if(current.size() == distinct)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
