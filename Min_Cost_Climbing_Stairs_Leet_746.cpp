//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//#include <iterator>
//#include <set>
//#include <iomanip>
//
//class Solution {
//public:
//    //TL
//    //int minCostClimbingStairs(std::vector<int>& cost) {
//    //    minCostClimbingStairsUtil(cost, cost.size(), 0);
//    //    return res;
//    //}
//    //void minCostClimbingStairsUtil(std::vector<int>& cost, size_t size, int temp_res, int curr = -1) {
//    //    if (curr == size - 1 || curr + 1 == size - 1) {
//    //        res = std::min(res, temp_res);
//    //        return;
//    //    }
//    //    minCostClimbingStairsUtil(cost, size, temp_res + cost[curr+1], curr + 1);
//    //    minCostClimbingStairsUtil(cost, size, temp_res + cost[curr+2], curr + 2);
//    //}
//
//    //Bottom Up
//    int minCostClimbingStairs(std::vector<int>& cost) {
//        size_t n = cost.size();
//        int* dp = new int[n];
//        for (size_t i = 0; i < n; ++i) {
//            if (i < 2) dp[i] = cost[i];
//            else dp[i] = cost[i] + std::min(dp[i - 1], dp[i - 2]);
//        }
//        return std::min(dp[n - 1], dp[n - 2]);
//    }
//    
//    //Top Down
//    //int minCostClimbingStairs(std::vector<int>& cost) {
//    //    int n = cost.size();
//    //    dp = new int[n];
//    //    return std::min(minCostClimbingStairsUtil(cost, n - 1), minCostClimbingStairsUtil(cost, n - 2));
//    //}
//
//    //int minCostClimbingStairsUtil(std::vector<int>& cost, int n) {
//    //    if (n < 0) return 0;
//    //    if (n == 0 || n == 1) return cost[n];
//    //    dp[n] = cost[n] + std::min(minCostClimbingStairsUtil(cost, n - 1), minCostClimbingStairsUtil(cost, n - 2));
//    //    return dp[n];
//    //}
// 
////Top Down
////private:
////    int* dp;
//// 
////TL
////private:
////    int res = INT_MAX;
//};
//
//int main() {
//    Solution obj;
//    std::vector<int> vec{ 10,15,20 };
//    std::cout << obj.minCostClimbingStairs(vec);
//    return 0;
//}
