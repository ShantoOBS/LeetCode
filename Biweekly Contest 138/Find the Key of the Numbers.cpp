
// Leet-Code Link : https://leetcode.com/contest/biweekly-contest-138/problems/find-the-key-of-the-numbers/

//T.C : O(n)
//S.C : O(1)

class Solution {
public:
    int generateKey(int num1, int num2, int num3) {

      string s1=to_string(num1),s2=to_string(num2),s3=to_string(num3);

      while(s1.length()<4)s1="0"+s1;
      while(s2.length()<4)s2="0"+s2;
      while(s3.length()<4)s3="0"+s3;

      string key="";
      
      for(int i=0;i<4;i++){

        char ch=min({s1[i],s2[i],s3[i]});
        key+=ch;
      }

      return stoi(key);


       
        
    }
};
