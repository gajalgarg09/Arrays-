// Given an array of integers nums, return the value of the largest element in the array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int largestElement(vector<int>& nums){
    int largestElement = nums[0];
        int n = nums.size();

        for(int i =0; i<n; i++){
            if(nums[i] > largestElement){
                largestElement = nums[i];
            }
        }
        return largestElement;
}
