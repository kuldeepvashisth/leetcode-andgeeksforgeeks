class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            if(nums[i]==0)
            {
                while(j<n && nums[j]==0)
                {
                    j++;
                }
                if(j<n)
                {
                    swap(nums[i],nums[j]);
                }

             else continue;    
            }
            
                 
        }
    }        
};