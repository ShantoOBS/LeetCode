
// Leet-Code Link : https://leetcode.com/contest/weekly-contest-414/problems/reach-end-of-array-with-max-score/description/
//T.C : O(n)
//S.C : O(1)

class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {

        int n=nums.size();
        long long ans=0;
         
         long long temp=nums[0];

         int j=0;

        for(int i=1;i<n-1;++i){
         
            if(nums[i]>nums[j]){
                ans+=temp * 1LL *(i-j);
                temp=nums[i];
                j=i;
            }
        }

        ans+=temp * 1LL * (n-1-j);


        return ans;
        
    }
};
