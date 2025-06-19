// Given an array of positive integers arr[], return the second largest element from the array. 
// If the second largest element doesn't exist then return -1.
// Note: The second largest element should not be equal to the largest element.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        
        int largest = arr[0];
        int secondLargest = -1;
        
        for(int i =0; i<n; i++){
            if(arr[i] > largest){
                largest = arr[i]; 
            }
        }
        
        for(int i =0; i<n; i++){
            if(arr[i] > secondLargest && arr[i] < largest){
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
};