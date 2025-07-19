class Solution {
public:
      int f(vector<int>& nums, int k,int n){
     if(k<=0) {
        return 0;
     }
     int i=0;
     int result=0;
     map<int,int>mp;
     for(int j=0;j<n;j++){
        mp[nums[j]]++;
        while(mp.size()>k){
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            i++;
        }
        result+=j-i+1; 
     }
     return result;
      }

    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        return f(nums,k,n)-f(nums,k-1,n);
    }
};