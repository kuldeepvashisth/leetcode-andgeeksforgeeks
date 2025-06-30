class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0; int count=1;
        int j=i+1;
        while(i<j && j<n)
        {
            if(nums[i]==nums[j]) j++;
            else if(nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];
                i++;
                j++;
                count++;
            }
        } return count;
    }
};