class Solution {
public:
    int minElement(vector<int>& nums) {
    
     int mini=INT_MAX;

        for(auto i:nums){

            string s=to_string(i);

            int sum=0;

            for(auto ch:s){
                sum+=ch-'0';
            }

            mini=min(mini,sum);
        }

        return mini;
        
    }
};
