class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v.push_back(grid[i][j]);
            }
        }
        int ans=0;
        sort(v.begin(),v.end());
        int l=v.size();
        int targ=v[l/2];
       for(auto it:v){
        if( it%x!=targ%x ) return -1;
         ans+=(abs(targ-it))/x;
       }
       return ans;
    }
};