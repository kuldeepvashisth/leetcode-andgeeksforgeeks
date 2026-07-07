class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        string x="";
        if(n==0) return 0;
        while(n>0){
            int digit=n%10;
            n=n/10;
            if(digit!=0){
                x+=digit+'0';
                sum+=digit;
            }
            else{
                continue;
            }
        }

  reverse(x.begin(),x.end());
     int num=stoi(x);
        return sum*num;
    }
};