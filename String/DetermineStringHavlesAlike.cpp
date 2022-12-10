class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> set={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int i=0,j=s.size()/2,count=0;
        while(j<s.size()){
            if(set.find(s[i++])!=set.end()) count++;
            if(set.find(s[j++])!=set.end()) count--;
        }
        return count==0;
    }
};