// Given an array nums containing n distinct numbers in the range [0, n], 
// return the only number in the range that is missing from the array.

#include<iostream>
#include<vector>
using namespace std;


// BRUTE FORCE APPROACH
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
        
//         int n = nums.size();

//         for(int i = 0; i<=n; i++){
//             int flag = 0;
//             for(int j = 0; j<n; j++){
//                 if(nums[j] == i){
//                     flag = 1;
//                     break;
//                 }
//             }
//             if(flag == 0){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };


// OPTIMISED APPROACH - SUM 
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
        
//         int n = nums.size();
//         int actualSum = n*(n+1)/2;
//         int sum = 0;
        
//         for(int i= 0; i<n; i++){
//             sum += nums[i];
//         }

//         int ans = actualSum - sum;
//         return ans;

//     }
// };


// OPTIMISED APPROACH - XOR
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int xor1 = 0;
        int xor2 = 0;

        for(int i = 1; i<=n; i++){
            xor1 ^= i;
        }

        for(int i = 0; i<n; i++){
            xor2 ^= nums[i];
        }

        return xor1 ^ xor2;
    }
};