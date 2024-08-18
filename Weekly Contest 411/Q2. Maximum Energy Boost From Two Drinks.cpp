class Solution {
public:
    long long maxEnergyBoost(vector<int>& A, vector<int>& B) {

       int n=A.size();

       if(n==0)return 0;

       long long dp_A[n];
       long long dp_B[n];

       dp_A[0]=A[0];
       dp_B[0]=B[0];

       for(int i=1;i<n;i++){
      
         dp_A[i]=max(dp_A[i-1]+A[i],(i>1?dp_B[i-2]:0)+A[i]);

         dp_B[i]=max(dp_B[i-1]+B[i],(i>1?dp_A[i-2]:0)+B[i]);

       }

       return max(dp_A[n-1],dp_B[n-1]);
        
    }
};
