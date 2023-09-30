// https://leetcode.com/problems/valid-palindrome/description/

/*
class Solution {
public:
    bool isPalindrome(string s) {
        
    string name;
    int n=s.size();

    for(int i=0;i<n;i++){
        if(((s[i]>='A' && s[i]<='Z') || (s[i])>='a' && s[i] <='z') || (s[i]>='0' && s[i]<='9'))
        name.push_back(s[i]);
    }
    
    for(char& c : name){
        c= tolower(c);
    }

    string copy=name;
    reverse(name.begin(), name.end());
    
    if(name==copy)
    return true;
    else 
    return false;
    }
};
*/