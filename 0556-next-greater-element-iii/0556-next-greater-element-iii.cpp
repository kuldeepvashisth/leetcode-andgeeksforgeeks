class Solution {
public:
    int nextGreaterElement(int n) {
       int ind=-1;
     string digit=to_string(n);
     int l=digit.size();
     for(int i=l-2;i>=0;i--)
     {
        if(digit[i]<digit[i+1])
        {
            ind=i;
            break;
        }
     } 
      if(ind==-1) return -1;
        for(int j=l-1;j>ind;j--)
        {
            if(digit[j]>digit[ind])
            {
                swap(digit[j],digit[ind]);
                break;
            }
        }
        reverse(digit.begin()+ind+1,digit.end());
     long long result=stoll(digit);
          return (result <= INT_MAX) ? (int)result : -1;
     } 
     
};