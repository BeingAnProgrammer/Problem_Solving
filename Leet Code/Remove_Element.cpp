// https://leetcode.com/problems/remove-element/description/?envType=study-plan-v2&envId=top-interview-150


/*

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int n = nums.size();
        int i = 0; 

        for (int j = 0; j < n; j++) {
            if (nums[j] != val) {
                nums[i] = nums[j]; 
                i++;
            }
        }
        
        return i;
    }
};

*/