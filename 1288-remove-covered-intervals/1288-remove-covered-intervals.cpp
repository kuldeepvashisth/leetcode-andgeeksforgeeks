class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        int n=arr.size();
        int cnt=0;
   
        for(int i=0;i<n;i++){
         bool covered=false;         
            int li=arr[i][0];
            int ri=arr[i][1];
            
            for(int j=0;j<n;j++){
            
            if(j==i) continue;

            int nxtli=arr[j][0];
            int nxtri=arr[j][1];
             

             if(nxtli<=li && nxtri>=ri){
                covered=true;
                break;
             }

            }

            if(covered) cnt++;
        }
        return n-cnt;
    }
};