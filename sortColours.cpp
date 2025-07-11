// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, 
// with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0, cnt1 = 0 , cnt2 = 0;
        int n = nums.size();

        for(int i =0; i<n; i++){
            if(nums[i] == 0) cnt0++;
            else if( nums[i] == 1) cnt1++;
            else cnt2++;
        }

        for(int i =0; i<cnt0; i++){
            nums[i] = 0;
        }

        for(int i= cnt0; i<cnt0+cnt1; i++){
            nums[i] = 1;
        }

        for(int i= cnt0+cnt1; i<n; i++){
            nums[i] = 2;
        }
    }
};

// OPTIMAL APPROACH - DUTCH NATIONAL FLAG ALGORITHM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid] , nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid] , nums[high]);
                high--;
            }
        }
    }
};