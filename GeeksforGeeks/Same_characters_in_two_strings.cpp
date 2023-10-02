// https://practice.geeksforgeeks.org/problems/c-corresponding-position-in-the-two-strings-that-hold-exactly-the-same-characters5013/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab


/*
class Solution{
    public:
    int sameChar(string A, string B)
    {
        int n= A.size();
        
        for(char& c : A){
            c=tolower(c);
        }
        for(char& c : B){
            c=tolower(c);
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            if(A[i]==B[i])
            count++;
        }
        return count;
    }
};
*/