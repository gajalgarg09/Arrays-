// Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSum = INT_MIN;
        int n = nums.size();

        for(int i =0; i<n; i++){
            for(int j = i; j<n; j++){
                int sum = 0;
                for(int k =i; k<=j; k++){
                    sum += nums[k];
                }
                maxSum = max(maxSum , sum);
            }
        }
        return maxSum;
    }
};

// BETTER APPROACH - here we are not taking every element again and again to calculate the sum , 
// we are just adding the new element in the sum of previous elements
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSum = INT_MIN;
        int n = nums.size();

        for(int i =0; i<n; i++){
            int sum = 0;
            for(int j = i; j<n; j++){
                sum += nums[j];
                maxSum = max(maxSum , sum);
            }   
        }
        return maxSum;
    }
};


// OPTIMAL SOLUTION - KADANE'S ALGORITHM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0 , maxSum = INT_MIN;

        for(int i =0; i<n; i++){
            sum += nums[i];

            if(sum > maxSum){
                maxSum = sum;
            }

            if(sum < 0){
                sum = 0;
            }
        }
        return maxSum;
    }
};