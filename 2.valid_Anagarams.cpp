class Solution {
public:
    bool isAnagram(string s, string t) {
        /*
        brute force --> O(nlogn + mlogm), O(1)
        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;
        */

        /*
        using map ---> o(n+m), o(1)
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char,int> countS;
        unordered_map<char,int> countT;
        for(int i=0;i<s.size();i++){
            countS[s[i]]++;
            countT[t[i]]++;
        }
        return countS == countT;
        */

        //optimal using Array --> O(n+m), O(26) = O(1)
        if(s.size() != t.size()){
            return false;
        }
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++){
            count[s[i]- 'a'] ++;
            count[t[i]- 'a'] --;
        }
        for(int it: count){
            if(it != 0){
                return false;
            }
        }
        return true;
    }
};
