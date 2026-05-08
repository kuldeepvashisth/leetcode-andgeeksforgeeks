class Solution {
public:
    #define rep(i,n) for(int i=0;i<n;i++)
    int maxRotateFunction(vector<int>& nums) {
     int n=nums.size();   
    int prev=0;    
   int sum=0;
   rep(i,n){
      sum+=nums[i];
      //prev must initially store f(0);
      prev+=i*nums[i];
   }
    int maxi=prev;

    for(int k=0;k<n;k++){
       int curr=prev+sum-(n*nums[n-1-k]);
    maxi=max(maxi,curr);
    prev=curr;
    }
    return maxi;

    }
};