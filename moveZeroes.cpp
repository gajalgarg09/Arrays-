// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int> temp;

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] != 0 ){
                temp.push_back(nums[i]);
            }
        }

        for(int i = 0; i<temp.size(); i++){
            nums[i] = temp[i];
        }

        for(int i = temp.size(); i<n; i++){
            nums[i] = 0;
        }
    }
};

// OPTIMAL APPROACH - SWAPPING
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        int j = -1;

        for(int i =0; i<n; i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }

        if(j == -1){
            return;
        }

        for(int i = j+1; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i] , nums[j]);
                j++;
            }
        }
    }
};