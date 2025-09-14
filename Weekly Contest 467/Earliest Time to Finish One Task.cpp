class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {


        int ans=0;

        vector<int>temp;

        for(auto u:tasks){
             temp.push_back(u[0]+u[1]);
        }

        sort(temp.begin(),temp.end());

        return temp[0];
        
    }
};
