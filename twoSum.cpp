// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

// BRUTE FORCE
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        for(int i =0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                    break;
                }
            }
        }
        return {};
    }
};

// OPTIMAL SOLUTION - USING MAP
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int , int > mpp;
        int n = nums.size();
        for(int i =0; i<n; i++){
            int a = nums[i];
            int more = target - a;
            if(mpp.find(more) != mpp.end()){
                return {i, mpp[more]};
            }
            mpp[a] = i;
        }
        
    return {};
    }
};

// OPTIMISED APPROACH - FOR YES/NO TYPE AND NOT FOR INDEX TYPE
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());

        int n = nums.size();
        int s = 0;
        int e = n-1;

        
        while(s < e){
            int sum = nums[s] + nums[e];
            if(sum == target){
                return {s , e};
            }
            else if (sum > target){
                e--;
            }
            else{
                s++;
            }
        }
        return {};
    }
};