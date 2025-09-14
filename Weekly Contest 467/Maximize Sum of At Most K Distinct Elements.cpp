class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {

        vector<int>temp;

        unordered_map<int,int>mp;

        for(auto x:nums){

             if(mp.find(x)==mp.end()){
                 temp.push_back(x);
                 mp[x]++;
             }
        }

        sort(temp.begin(),temp.end());

        vector<int>ans;
        
        while(temp.size() && k>0){

              ans.push_back(temp.back());
            temp.pop_back();
              k--;
        }

        return ans;


     

        
        
    }
};
