// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int minI  = prices[0] , profit = 0;
        for(int i =0; i<n; i++){
            int cost = prices[i] - minI;
            profit = max(cost , profit);
            minI = min(minI , prices[i]);
        }
        return profit;
    }
};