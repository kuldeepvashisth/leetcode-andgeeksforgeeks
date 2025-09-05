class Solution {
public:
    void dfs(int node,vector<int>&vis,vector<vector<int>>&l){
        vis[node]=1;
       for(auto it : l[node]){
        if(!vis[it]){
            dfs(it,vis,l);
        }
       }
    }
    
    int findCircleNum(vector<vector<int>>& adj) {
      int n=adj[0].size();
      vector<vector<int>>l(n);
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(adj[i][j]==1 && i!=j){
            l[i].push_back(j);
            l[j].push_back(i);
          }
        }
      }
      int cnt=0;
      vector<int>vis(n,0);
      for(int i=0;i<n;i++){
      //  int row=l[i];
        if(!vis[i]){
            cnt++;
            dfs(i,vis,l);
        }
      }return cnt; 
     }
};