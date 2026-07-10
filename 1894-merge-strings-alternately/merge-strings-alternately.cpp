class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.length();
        int n2=word2.length();
        int i=0,j=0;
        string word="";
        while(i<n1 || j<n2){
            if(i<n1) word+=word1[i];
            if(j<n2) word+=word2[j];
            i++;
            j++;
        }
        return word;
    }
};