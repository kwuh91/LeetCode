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
//    //           time space
//    // Bottom Up O(n) O(n)
//    //int rob(std::vector<int>& nums) {
//    //    size_t n = nums.size();
//    //    int* dp = new int[n];
//    //    if (n < 3) return *std::max_element(nums.begin(), nums.end());
//    //    for (size_t i = 0; i < n; ++i) {
//    //        if (i < 2) dp[i] = nums[i];
//    //        else if (i == 2) dp[i] = nums[i] + dp[i - 2];
//    //        else dp[i] = nums[i] + std::max(dp[i - 2], dp[i - 3]);
//    //    }
//    //    return std::max(dp[n - 1], dp[n-2]);
//    //}
//
//    //           time space
//    // Bottom Up O(n) O(1)
//    int rob(std::vector<int>& nums) {
//        size_t n = nums.size();
//        if (n < 3) return *std::max_element(nums.begin(), nums.end());
//        for (size_t i = 2; i < n; ++i) {
//            if (i == 2) nums[i] = nums[i] + nums[i - 2];
//            else nums[i] = nums[i] + std::max(nums[i - 2], nums[i - 3]);
//        }
//        return std::max(nums[n - 1], nums[n - 2]);
//    }
//};
//
//int main() {
//    Solution obj;
//    std::vector<int> vec{ 0,6 };
//    std::cout << obj.rob(vec);
//    return 0;
//}
