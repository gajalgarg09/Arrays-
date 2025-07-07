// Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxCount = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
                if (count > maxCount) {
                    maxCount = count;
                }
            }
            else{
                count = 0;
            }
        }
        return maxCount;
    }
};