class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        int n1=nums1.size();
        int n2=nums2.size();
        stack<int>st;
        vector<int>ans(n1);
        for(int i=n2-1;i>=0;i--)
        {
            while(st.size()>0 && st.top()<=nums2[i])
            {
                st.pop();
            }
            if(st.size()==0) mp[nums2[i]]=-1;
            else
            {
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<n1;i++)
            {
             ans[i]=mp[nums1[i]];   
            }
            return ans;
    }
    
};