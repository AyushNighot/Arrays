---------------------------------------------------------- Apporach - 1 -------------------------------------------------------------------------------------------------------------
  class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int  n = nums.size();

        long long ans=0;
      
        vector<long long> arr;
        
    
        int size=nums.size();
        
        for(int i=0;i<size;i++)
        {
            arr.push_back(nums[i]);
            
        }
        
       for(int i=arr.size()-1;i>0;i--)
       {
          if(arr[i-1] <= arr[i])
          {
              arr[i-1] = arr[i] + arr[i-1];
              
          }
       }
        
       return *max_element(arr.begin(),arr.end());
    }
};

---------------------------------------------------------------------------Approach - 2 --------------------------------------------------------------------------------------------

  class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        stack<long long>stt;
        long long int m = 0;

        reverse(nums.begin(),nums.end());

        for (int i = 0 ; i < nums.size() ; i++)
        {
            if( !stt.empty() && stt.top() >= nums[i])
            {
                stt.top() = stt.top() + nums[i];
            }
            else 
            {
                stt.push(nums[i]);
            }
            m = max(stt.top(),m);
        }
        return m;
    }
};
