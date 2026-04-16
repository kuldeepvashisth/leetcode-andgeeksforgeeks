class Solution {
public:
     void f(int idx,int n,vector<int>& nums,vector<int>&ds,vector<vector<int>>&ans){
     if(idx>=n){
        ans.push_back(ds);
        return;
     }
     /*
    THIS will not work here bcoz there is no way to exit in mid,but we have to generate all subsets W/O any Condition  
        
     // for(int i=idx;i<n;i++){
    //     ds.push_back(nums[i]);
    //      f(i+1,n,nums,ds,ans);
    //      ds.pop_back();
    // }

     
      */
    
    ds.push_back(nums[idx]);
      f(idx+1,n,nums,ds,ans);
      ds.pop_back();
     f(idx+1,n,nums,ds,ans);
      
  }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
       vector<vector<int>>ans;
       vector<int>ds;
       f(0,n,nums,ds,ans);
       return ans;
    }
};