//#pragma GCC optimize("O3")
//
//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//#include <iterator>
//#include <set>
//
//auto init = [] {std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0); return 0;}();
//
//class Solution {
//public:
//    int minSubArrayLen(int target, std::vector<int>& nums) {
//        int n = nums.size();
//        if (n < 2) return nums[0] >= target ? n : 0;
//        int ans = INT_MAX; int R = 0; int L = 0;
//        int sum = nums[0];
//        while (true) {
//            if (sum >= target) {
//                ans = std::min(ans, R - L + 1);
//                sum -= nums[L];
//                L++;
//            }
//            if (sum < target) {
//                if (R + 1 >= n) break;
//                R++;
//                sum += nums[R];
//            }
//        }
//        return ans == INT_MAX ? 0 : ans;
//    }
//};
//
//int main() {
//    Solution obj;
//    std::vector<int> vec{ 10,2,3 };
//    std::cout << obj.minSubArrayLen(6, vec);
//    //std::cout << obj.foo(7, vec);
//    return 0;
//}
