// Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    bool arraySortedOrNot(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i<n-1; i++){
            if(nums[i] > nums[i+1]){
                return false;
            }
        }
        return true;
    }
};