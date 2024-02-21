class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        int sizee = nums.size();
        for (int i = sizee -2; i >= 0 ; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }

        if(index == -1) return reverse(nums.begin(),nums.end());

        for ( int i = sizee - 1 ; i >= index ; i--)
        {
            if(nums[i] > nums[index])
            {
                swap(nums[i],nums[index]);
                break;
            }
        }
       reverse(nums.begin()+ index +1,nums.end());
    }
};

------------------------------------------------------------------------------------------------------

      WITH STL
   class Solution {
public:
    void nextPermutation(vector<int>& nums) { 
     next_permutation(nums.begin(),nums.end());
  }
}
