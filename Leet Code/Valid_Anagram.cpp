// https://leetcode.com/problems/valid-anagram/description/

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
       
//        /*int n=s.size();
//        int m=t.size();
//        if(n!=m){
//            return false;
//        }
//        int arr[26]={0};

//        for(char c : s){
//            arr[c - 'a']++;
//        }
//        for(char c : t){
//            arr[c - 'a']--;
//        }

//        for(int i=0;i<n;i++){
//            if(arr[i]!=0)
//            return false;
//        }
//        return true;
//        this method is ok but the below method is easy and more fast
//        */  
       



//     int n1 = s.length();
// 	int n2 = t.length();

	
	
// 	if (n1 != n2)
// 		return false;

	
// 	sort(s.begin(), s.end());
// 	sort(t.begin(), t.end());

	
// 	for (int i = 0; i < n1; i++)
// 		if (s[i] != t[i])
// 			return false;

// 	return true;
//     }
// };