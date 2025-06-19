// Given an array of integers nums, return the value of the largest element in the array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int largestElement(vector<int>& nums){
    sort(nums.begin() , nums.end());
    return nums[nums.size() - 1];
}
