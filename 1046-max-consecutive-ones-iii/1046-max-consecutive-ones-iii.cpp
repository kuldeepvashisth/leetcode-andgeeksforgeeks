class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int right=0,left=0,zerocount=0;
        int maxlen=0;
        while(right<n)
        {
            if(nums[right]==0)
            {
                zerocount++;
               // right++;
            }
            while(zerocount>k)
            {
                if(nums[left]==0)
                {
                    zerocount--;
                }
                left++;
            }
            maxlen=max(maxlen,right-left+1);
             right++;
        }
          return maxlen;
    }
};