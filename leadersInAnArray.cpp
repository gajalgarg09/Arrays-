#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// BRUTE FORCE
class Solution {
public:
    vector<int> leadersInArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;
        bool leader = true;

        for(int i =0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(nums[j] > nums[i]){
                    leader = false;
                    break;
                }
            }
            if(leader == true) ans.push_back(nums[i]);
        }
        return ans;
    }
};


// OPTIMAL APPROACH
class Solution {
public:
    vector<int> leadersInArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;

        int maxi = INT_MIN;
        for(int i = n-1; i>=0; i--){
            if(nums[i] > maxi){
                ans.push_back(nums[i]);
            }
            maxi = max(maxi , nums[i]);
        }  
        sort(ans.begin() , ans.end()); // if sorted answer is required
        return ans;
    }
};