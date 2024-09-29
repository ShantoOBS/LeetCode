class Solution {
public:
    bool check(char ch){
        return ch=='a' || ch=='e' || ch== 'i' || ch=='o' || ch=='u';
    }
    int countOfSubstrings(string word, int k) {

        int n=word.size();
        int ans=0;

        int dif=n-(k+5);

        for(int i=0;i<n;i++){
         
         set<char>v;
         vector<char>c;

         for(int j=i;j<n;j++){

            if(check(word[j])){
                v.insert(word[j]);
            }
            else if(isalpha(word[i])) c.push_back(word[j]);


            if(v.size()==5 && c.size()==k)ans++;

            if(c.size()>k)break;
         }
           

        }

        return ans;
        
    }
};
