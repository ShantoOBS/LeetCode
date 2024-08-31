
// Leet-Code Link : https://leetcode.com/contest/biweekly-contest-138/problems/hash-divided-string/

//T.C : O(n)
//S.C : O(n/k)

class Solution {
public:
    string stringHash(string s, int k) {

        map<char,int>m;

        for(int i=0;i<26;i++){
            m['a'+i]=i;
        }

         map<int,char>nm;

        for(int i=0;i<26;i++){
            nm[i]='a'+i;
        }
         
        string result=""; 

        for(int i=0;i<s.length();i+=k){

            int j=i;
            int sum=0;
            while(j<i+k){
                sum+=m[s[j++]];
            }

            sum%=26;
            result+=nm[sum];


        }






      //  for(auto i:m)cout<<i.first<<" "<<i.second<<endl;

        return result;

    }
};
