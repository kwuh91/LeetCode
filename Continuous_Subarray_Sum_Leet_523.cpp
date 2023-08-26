//#pragma GCC optimize("O3")
//
//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//#include <iterator>
//#include <set>
//#include <iomanip>
// 
//auto init = [] {std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0); return 0;}();
//
//class Solution {
//public:
//    bool checkSubarraySum(std::vector<int>& nums, int k) {
//        size_t n = nums.size(); std::unordered_map<int, int> uni_count;
//        if (n <= 1) return false;
//        for (size_t i = 1; i < n; ++i) nums[i] = nums[i - 1] + nums[i];
//        for (size_t i = 0; i < n; ++i) { 
//            if (nums[i] % k == 0 && nums[i] != 0 && i != 0) return true;
//            nums[i] = nums[i] % k; 
//            uni_count[nums[i]]++; 
//        }
//        size_t i = 0;
//        for (std::pair<const int, int> it : uni_count) {
//            if (it.second > 1) {
//                size_t l = 0; size_t r = n - 1;
//                while (nums[l] != it.first || nums[r] != it.first) {
//                    if (nums[l] != it.first) l++;
//                    if (nums[r] != it.first) r--;
//                }
//                if (r - l > 1) return true;
//                else if (nums[l] == 0 && nums[r] == 0) return true;
//            }
//            i++;
//        }
//        return false;
//    }
//};
//
//int main() {
//    Solution obj;
//    std::vector<int> vec{ 5,0,0,0 };
//    std::cout << obj.checkSubarraySum(vec, 3);
//    return 0;
//}
