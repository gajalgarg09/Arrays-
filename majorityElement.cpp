// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

// BRUTE FORCE 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for(int i =0; i<n; i++){
            int cnt = 0;
            for(int j = 0; j<n; j++){
                if(nums[i] == nums[j]){
                    cnt++;
                }
                if(cnt > n/2){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};

// ANOTHER APPROACH
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        return nums[n/2];
    }
};

// OPTIMISED APPROACH - MAPS
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int, int> mpp;  // <element , count>
        int n = nums.size();

        for(int i =0; i<n; i++){
            mpp[nums[i]]++;
        }

        for(auto it : mpp){
            if(it.second > n/2){
                return it.first;
            }
        }
    return -1;
    }
};


// OPTIMISED APPROACH - MOORE'S VOTING ALGORITHM
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        int cnt = 0;
        int el;

        for(int i =0; i<n; i++){
            if(cnt == 0){
                cnt = 1;
                nums[i] = el;
            }
            else if(nums[i] == el){
                cnt++;
            }
            else{
                cnt--;
            }
        }

        int cnt1 = 0;
        for(int i =0; i<n; i++){
            if(nums[i] == el){
                cnt1++;
            }
        }
        if(cnt1 > n/2){
            return el;
        }
        return -1;
    }
};