/*Add commentMore actions
    Company Tags                : will update later
    Leetcode Link               : https://leetcode.com/contest/weekly-contest-456/problems/partition-string/description/
*/

/*********************************************************** C++ **************************************************/
//Approach-1 (Using sorting with indices)
//T.C : O(n)
//S.C : O(n)
class Solution {
public:
    vector<string> partitionString(string s) {

        vector<string>ans;

        map<string,int>mp;
        
        int i=0;
        
        while(i<s.size()){

            string temp="";
            int j=i;
            
            while(j<s.size() && mp[temp]){
                 temp+=s[j];
                 j++;
            }

          
            if(mp[temp]==0 && temp!="")ans.push_back(temp);


            mp[temp]++;

            i=j;
        }

        return ans;

        
    }
};©leetcode
