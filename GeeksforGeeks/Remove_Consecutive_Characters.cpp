// https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1


/*
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        int n=S.size();
        
        string a="";
        
        for(int i=0;i<n;i++){
            if(S[i]!=S[i+1])
            // a+=S[i];
            a.push_back(S[i]);
        }
        return a;
    }
};
*/