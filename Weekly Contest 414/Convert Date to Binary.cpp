
// Leet-Code Link : https://leetcode.com/contest/weekly-contest-414/problems/convert-date-to-binary/description/

class Solution {
public:
    
    string binary(long long s){
        

        string ans="";

        while(s){

            if(s%2==0){
               ans+='0';
            }
            else ans+='1';
            s/=2;
        }

        reverse(ans.begin(),ans.end());


        return ans;

         
    }
    string convertDateToBinary(string date) {

         string s="";
         s+=date[0];
         s+=date[1];
         s+=date[2];
         s+=date[3];

        string ans=binary(stol(s));

        ans+='-';

        s="";

        if(date[5]!='0'){
          s+=date[5];
        }
        s+=date[6];

        ans+=binary(stol(s));

        ans+='-';

        s="";

        if(date[8]!=0){
            s+=date[8];
        }

        s+=date[9];

        ans+=binary(stol(s));
        

        
      return ans;
        
    }
};
