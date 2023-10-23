// https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150

/*

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> num3(m+n);

        for(int i=0;i<m;i++){
            num3[i]=nums1[i];
        }
        for(int i=0;i<n;i++){
            num3[i+m]=nums2[i];
        }
        sort(num3.begin(), num3.end());
        for(int i=0;i<m+n;i++){
            nums1[i]=num3[i];
        }
    }
};

*/