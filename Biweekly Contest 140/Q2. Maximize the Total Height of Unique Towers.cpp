class Solution {
public:
    long long maximumTotalSum(vector<int>& m) {

      long long n=m.size();

      sort(m.begin(),m.end());
     
      long long c=m.back();
      
      long long sum=0;

      for(long long i=n-1;i>=0;i--){

        c=min(c,(long long) m[i]);
        if(c<=0)return -1;
        sum+=c;
        c--;
      }

      return sum;
    }
};
