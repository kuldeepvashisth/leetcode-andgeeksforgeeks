class Solution {
public:
    int f(int num){
        int mini=INT_MAX;
        int maxi=INT_MIN;
        while(num>0){
            int digit=num%10;
            if(digit>=maxi){            
                maxi=digit;
            }
            mini=min(digit,mini);
            
            num=num/10;
        }

        int range=maxi-mini;
        return range;
    }

    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        //int ans=INT_MIN;
        int range=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
          int ans=f(nums[i]);
          if(ans>range){
             range=ans;
             sum=nums[i];
          }
            else if(ans==range){
                sum+=nums[i];
            }
        }
        return sum;
    }
};